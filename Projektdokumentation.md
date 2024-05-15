# Projekt-Dokumentation



Filip Mitrovic, Filip Kritzner, Raul Gilardoni und Lennard Bühler

| Datum | Version | Zusammenfassung                                              |
| ----- | ------- | ------------------------------------------------------------ |
|   08.03.2024    | 0.0.1   |  Wir haben uns für ein Projekt entschieden und uns darüber informiert.|
|   15.03.2024    | 0.0.2   |  Wir haben angefangen unser Projekt zu implementieren und haben unsere Projektdokumentation erweitert.|
|   23.03.2024    | 0.0.3   |  Wir haben die Textverschlüsselung implementiert. |
|   06.04.2024    | 0.0.4   |  Wir haben uns befasst mit dem Öffnen und Lesen von BMP Dateien. |
|   26.04.2024    | 0.0.5   |  Wir haben Bildverschlüsselung und die Entschlüsselung erfolgreich implementiert. |
|   03.05.2024    | 1.0.0   | Programm ist fertig und wir haben Portfolios verfasst. |


## 1 Informieren

### 1.1 Ihr Projekt

Unser Projekt umfasst eine einfache Verschlüsselungssoftware für Texte und Bilder. Texte werden mittels einer Caesar-Verschlüsselung verarbeitet, während Bilder durch eine einfache Pixelverschiebung in einer BMP-Datei verschlüsselt werden. Die Sicherheit ist gering, da Formen im Bild trotz Verschlüsselung erkennbar bleiben. Die Software unterstützt nur unkomprimierte BMP-Dateien mit 24-Bit Farbtiefe.





### 1.2 User Stories

| US-№ | Verbindlichkeit | Typ  | Beschreibung                       |
| ---- | --------------- | ---- | ---------------------------------- |
| 1    |       Muss         |   funktional   | Als User möchte ich, das das Programm einen Text einlesen kann |
| 2    |       Muss         |   funktional   | Als User möchte ich, das das Programm einen Text verschlüsseln kann  |
| 3    |       Muss         |   funktional   | Als User möchte ich, das das Programm einen verschlüsselten Text ausgeben kann  |
| 4    |       Muss         |   funktional   | Als User möchte ich, das das Programm ein Bild einlesen kann  |
| 5    |       Muss         |   funktional   | Als User möchte ich, das das Programm ein Bild verschlüsseln kann  |
| 6    |       Muss         |   funktional   | Als User möchte ich, das das Programm ein verschlüsseltes Bild ausgeben kann |
| 7    |       Muss         |   funktional   | Als User möchte ich, das ich einen eigenen Schlüssel zur Verschlüsselung von Bilder auswählen kann |
| 8    |       Muss         |   funktional   | Als User möchte ich, das ich einen eigenen Schlüssel zur Verschlüsselung von Texten auswählen kann  |








### 1.3 Testfälle

| TC-№ | Ausgangslage | Eingabe | Erwartete Ausgabe |
| ---- | ------------ | ------- | ----------------- |
| 1.1  |      Programm wird geöffnet        | Text wird eingefügt       |    Text wird vom Programm eingelesen               |
| 2.1  |      Programm wird geöffnet und Text ist eigefügt        |  Schlüssel wird ausgewählt      |   Programm verschlüsselt Text |
| 3.1  |      Programm wird geöffnet, Text ist eingefügt und Text wurde vom Programm verschlüssselt|Kein|Verschlüsselter Text wird ausgegeben|
| 4.1  |      Programm wird geöffnet        | Bild wird eigefügt       |    Bild wird vom Programm eingelesen                      |
| 5.1  |      Programm wird geöffnet und Bild ist eigefügt        |Schlüssel wird ausgewählt        |  Programm verschlüsselt Bild   |
| 6.1  |      Programm wird geöffnet,Bild ist eingefügt und Bild wurde vom Programm verschlüssselt|Keine|Verschlüsseltes Bild wird ausgegeben|
| 7.1  |      Programm wird geöffnet und Bild ist eigefügt|   Schlüssel wählen     |  Bild wird mit gewählten Schlüssel verschlüsselt |
| 8.1  |      Programm wird geöffnet und Text ist eigefügt    |  Schlüssel wählen|  Text wird mit gewählten Schlüssel verschlüsselt   |


### 1.4 Diagramme




## 2 Planen

| AP-№ | Zuständig | geplante Zeit | Beschreibung |
| ---- |  --------- | ------------ | ------------- |
| 1.A  |    Lennard Bühler            | 60           |     Überblick und Verständnis der Struktur und Funktionalität von C erlangen.         |
| 2.A  |    Lennard Bühler               |  60            |     Einteilung der Projektaufgaben.            |
| 3.A  |    Lennard Bühler               |   30         |   Durchführen der Tests.         |
| 4.A  |    Lennard Bühler               |  60            |   Bearbeitung der Projektdokumentation.                |
| 5.A  |    Lennard Bühler               |   300        |      Erstellen des Portfolios.        |
| 6.A  |  Filip Mitrovic               |   60           |  Überblick und Verständnis der Struktur und Funktionalität von C erlangen.            |
| 7.A  |   Filip Mitrovic                   |   60           |     Einteilung der Projektaufgaben.             |
| 8.A  |   Filip Mitrovic                   |  30          |    Debugging           |
| 9.A  |    Filip Mitrovic            |      60        |      Durchführen der Tests.        |
| 10.A  |     Filip Mitrovic               |  30          |    Bearbeitung der Projektdokumentation.            |
| 11.A  |     Filip Mitrovic               |  300           |   Erstellen des Portfolios.           |
| 12.A  |    Filip Kritzner                |  60            |     Überblick und Verständnis der Struktur und Funktionalität von C erlangen.         |
| 13.A  |     Filip Kritzner             |     30       |  Entwicklung der Hauptfunktionen in program.c.            |
| 14.A  |    Filip Kritzner                |  60            |   Implementierung der Header-Datei program.h           |
| 15.A  |    Filip Kritzner              |  60            |  mplementierung der Benutzeroberfläche (GUI) unter Verwendung von yard.bmp.            |
| 16.A  |    Filip Kritzner            |     30       |   Integration der GUI mit der Hauptapplikation.           |
| 17.A  |   Filip Kritzner             |   60           |   Einteilung der Projektaufgaben.            |
| 18.A  |   Filip Kritzner             |     30       |   Bearbeiten der Projektdokumentation.                     |
| 1.A  |    Filip Kritzner            |    300          |   Erstellen des Portfolios.           |
| 19.A  |  Filip Kritzner              |     30       |  Optimierung des Codes für bessere Leistung und Wartbarkeit.            |
| 20.A  | Raul Gilardoni               |     60         |     Überblick und Verständnis der Struktur und Funktionalität von C erlangen.         |
| 21.A  |   Raul Gilardoni               |     90       | Debugging und Fehlerbehebung basierend auf den Testergebnissen.             |
| 22.A  |   Raul Gilardoni               |       90     |    	Implementierung von Sicherheitsmaßnahmen           |
| 23.A  |   Raul Gilardoni               |         60   |   Bearbeitung der Projektdokumentation.          |
| 24.A  |   Raul Gilardoni               |           300 |     Erstellen des Portfolios.         |


## 3 Entscheiden




## 4 Realisieren

| AP-№ | Datum | Zuständig | geplante Zeit | tatsächliche Zeit |
| ---- | ----- | --------- | ------------- | ----------------- |
| 1.A   |        |    Lennard Bühler            |  60          |       60       |
| 2.A   |        |     Lennard Bühler               |    60          |  60            |
| 3.A   |        |    Lennard Bühler               |    30        |          30    |
| 4.A   |        |    Lennard Bühler               |     60         |          60    |
| 5.A   |        |     Lennard Bühler               |    300        |            300  |
| 6.A   |        |  Filip Mitrovic               |     60         |60              |
| 7.A   |        |   Filip Mitrovic                   |  60            |60              |
| 8.A   |        | Filip Mitrovic                   |     30       |      30        |
| 9.A   |        |  Filip Mitrovic            |      60        |            60  |
| 10.A  |        |  Filip Mitrovic               |   30         |             30 |
| 11.A  |        |  Filip Mitrovic               |  300          |          300  |
| 12.A  |        | Filip Kritzner                |     60         |            60  |
| 13.A  |        | Filip Kritzner             |    30        |            30  |
| 14.A  |        |  Filip Kritzner                |   60           |        60      |
| 15.A  |        |  Filip Kritzner              |     60         |            60  |
| 16.A  |        |   Filip Kritzner            |  30          |             30 |
| 17.A  |        |    Filip Kritzner             |   60           |           60   |
| 18.A  |        |    Filip Kritzner             |    30        |           30   |
| 1.A   |        |    Filip Kritzner            |  300          |             300 |
| 19.A  |        |   Filip Kritzner              |       30     |         30     |
| 20.A  |        |   Raul Gilardoni               |  60            |        60      |
| 21.A  |        |  Raul Gilardoni               |  90          |             90 |
| 22.A  |        |  Raul Gilardoni               |    90        |         90     |
| 23.A  |        |  Raul Gilardoni               |       60       |         60     |
| 24.A  |        |  Raul Gilardoni               |    300        |            300  |





## 5 Kontrollieren

### 5.1 Testprotokoll

| TC-№ | Datum | Resultat | Tester |
| ---- | ----- | -------- | ------ |
| 1.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 2.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 3.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 4.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 5.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 6.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 7.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |
| 8.1  |    03.05.2024   |   Funktioniert  |  Lennard Bühler      |


`Fazit:`
Das Projekt ist äußerst erfolgreich verlaufen, alle Ziele wurden erreicht. Das Programm funktioniert einwandfrei und ermöglicht es den Benutzern, sowohl Text als auch Bilder zu verschlüsseln und wieder zu entschlüsseln.
