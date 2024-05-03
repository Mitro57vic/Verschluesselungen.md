#include <stdint.h>

// von https://en.wikipedia.org/wiki/C_data_types#stdint.h for more on stdint.h.

typedef uint8_t BYTE;
typedef uint32_t DWORD;
typedef int32_t LONG;
typedef uint16_t WORD;

typedef struct // von Microsoft http://msdn.microsoft.com/en-us/library/dd183374(VS.85).aspx.
{
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
} __attribute__((__packed__))
BITMAPFILEHEADER;

typedef struct // von Microsoft http://msdn.microsoft.com/en-us/library/dd183376(VS.85).aspx.
{
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
} __attribute__((__packed__))
BITMAPINFOHEADER;

typedef struct // von Microsoft http://msdn.microsoft.com/en-us/library/aa922590.aspx.
{
    BYTE Blue;
    BYTE Green;
    BYTE Red;
} __attribute__((__packed__))
RGBTRIPLE;