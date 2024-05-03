#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "bmp.h"

typedef uint8_t BYTE;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef uint16_t WORD;

char text_entschluesseln(char c, int n);
void bild_entschluesseln(int hoehe, int breite, RGBTRIPLE bild[hoehe][breite], int schluessel);

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "1") == 0 && argc == 4)
    {
        char *text = argv[2];
        int key = atoi(argv[3]);

        printf("Verschluesselter Text: ");
        for (int i = 0, l = strlen(text); i < l; i++)
        {
            printf("%c", text_entschluesseln(text[i], key));
        }
        printf("\n");
    }
    else if (strcmp(argv[1], "2") == 0 && argc == 5)
    {
        int key = atoi(argv[3]);

        char *pfad_bild = argv[2];
        char *pfad_ausgabe = argv[4];

        FILE *eingabe = fopen(pfad_bild, "rb"); // von https://www.w3schools.com/c/c_files_read.php
        if (eingabe == NULL)
        {
            printf("Fehler beim Oeffnen von\n");
            return 2;
        }

        FILE *ausgabe = fopen(pfad_ausgabe, "wb"); // von https://www.w3schools.com/c/c_files_read.php
        if (ausgabe == NULL)
        {
            printf("Fehler beim Oeffnen von\n");
            return 3;
        }

        // von https://stackoverflow.com/questions/67035970/how-to-read-bmp-file-in-c
        BITMAPFILEHEADER bf;
        fread(&bf, sizeof(BITMAPFILEHEADER), 1, eingabe);

        BITMAPINFOHEADER bi;
        fread(&bi, sizeof(BITMAPINFOHEADER), 1, eingabe);

        if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
            bi.biBitCount != 24 || bi.biCompression != 0)
        {
            fclose(eingabe);
            fclose(ausgabe);
            printf("Nicht unterstuetztes Datei Format\n");
            return 4;
        }

        int hoehe = abs(bi.biHeight);
        int breite = bi.biWidth;

        RGBTRIPLE(*bild)
        [breite] = calloc(hoehe, breite * sizeof(RGBTRIPLE));
        if (bild == NULL)
        {
            printf("Nicht genug Speicher.\n");
            fclose(eingabe);
            fclose(ausgabe);
            return 5;
        }

        int padding = (4 - (breite * sizeof(RGBTRIPLE)) % 4) % 4;

        for (int i = 0; i < hoehe; i++)
        {
            fread(bild[i], sizeof(RGBTRIPLE), breite, eingabe);

            fseek(eingabe, padding, SEEK_CUR);
        }

        fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, ausgabe);

        fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, ausgabe);

        bild_entschluesseln(hoehe, breite, bild, key);

        for (int i = 0; i < hoehe; i++)
        {
            fwrite(bild[i], sizeof(RGBTRIPLE), breite, ausgabe);

            for (int k = 0; k < padding; k++)
            {
                fputc(0x00, ausgabe);
            }
        }

        free(bild);
        fclose(eingabe);
        fclose(ausgabe);

        return 0;
    }
    else
    {
        printf("Verwendung: ./program (Verschluesselungsart[1 fuer Text-, 2 fuer Bildverschluesselung, 3 zum entschluesseln von Text, 4 zum entschluesseln von einem Bild]) (Text; Pfad zum Bild) (Schluessel [Zahl]) [Ausgabe File von verschluesseltem Bild]\n");
        return 1;
    }
}

char text_entschluesseln(char c, int n)
{
    while (n > 26)
    {
        n -= 26;
    }

    if (islower(c))
    {
        c -= 'a';
        c = ((int)c - n + 26) % 26;
        c += 'a';
    }
    else if (isupper(c))
    {
        c -= 'A';
        c = ((int)c - n + 26) % 26;
        c += 'A';
    }

    return c;
}

void bild_entschluesseln(int hoehe, int breite, RGBTRIPLE bild[hoehe][breite], int schluessel)
{
    for (int i = 0; i < hoehe; i++)
    {
        for (int j = 0; j < breite; j++)
        {
            while (schluessel > 255)
            {
                schluessel -= 255;
            }

            int verschluesseltRed = (bild[i][j].Red - schluessel) % 256;
            int verschluesseltGreen = (bild[i][j].Green - schluessel) % 256;
            int verschluesseltBlue = (bild[i][j].Blue - schluessel) % 256;

            bild[i][j].Red = verschluesseltRed;
            bild[i][j].Green = verschluesseltGreen;
            bild[i][j].Blue = verschluesseltBlue;
        }
    }

    return;
}
