# Projekt-Dokumentation



Filip Mitrovic, Filip Kritzner, Raul Gilardoni und Lennard Bühler

| Datum | Version | Zusammenfassung                                              |
| ----- | ------- | ------------------------------------------------------------ |
|   08.03.2024    | 0.0.1   |  Wir haben uns für ein Projekt entschieden und uns darüber informiert.|
|   15.03.2024    | 0.0.2   |  Wir haben angefangen unser Projekt zu implementieren und haben unsere Projektdokumentation erweitert.|
|   23.03.2024    | 0.0.3   |  |
|   06.04.2024    | 0.0.4   | |
|   26.04.2024    | 0.0.5   |  |
|   03.05.2024    | 1.0.0   | Programm ist fertig |


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

| AP-№ | Zuständig | Beschreibung | geplante Zeit |
| ---- |  --------- | ------------ | ------------- |
| 1.A  |    Lennard Bühler            |            |              |
| 2.A  |    Lennard Bühler               |            |              |
| 3.A  |    Lennard Bühler               |            |              |
| 4.A  |    Lennard Bühler               |            |              |
| 5.A  |    Lennard Bühler               |            |              |
| 6.A  |  Filip Mitrovic               |            |              |
| 7.A  |   Filip Mitrovic                   |            |              |
| 8.A  |   Filip Mitrovic                   |            |              |
| 9.A  |    Filip Mitrovic            |            |              |
| 10.A  |     Filip Mitrovic               |            |              |
| 11.A  |     Filip Mitrovic               |            |              |
| 12.A  |    Filip Kritzner                |            |              |
| 13.A  |     Filip Kritzner             |            |              |
| 14.A  |    Filip Kritzner                |            |              |
| 15.A  |    Filip Kritzner              |            |              |
| 16.A  |    Filip Kritzner            |            |              |
| 17.A  |   Filip Kritzner             |            |              |
| 18.A  |   Filip Kritzner             |            |              |
| 1.A  |    Filip Kritzner            |            |              |
| 19.A  |  Filip Kritzner              |            |              |
| 20.A  | Raul Gilardoni               |            |              |
| 21.A  |   Raul Gilardoni               |            |              |
| 22.A  |   Raul Gilardoni               |            |              |
| 23.A  |   Raul Gilardoni               |            |              |
| 24.A  |   Raul Gilardoni               |            |              |






## 3 Entscheiden




## 4 Realisieren

| AP-№ | Datum | Zuständig | geplante Zeit | tatsächliche Zeit |
| ---- | ----- | --------- | ------------- | ----------------- |
| 1.A   |        |    Lennard Bühler            |            |              |
| 2.A   |        |     Lennard Bühler               |            |              |
| 3.A   |        |    Lennard Bühler               |            |              |
| 4.A   |        |    Lennard Bühler               |            |              |
| 5.A   |        |     Lennard Bühler               |            |              |
| 6.A   |        |  Filip Mitrovic               |            |              |
| 7.A   |        |   Filip Mitrovic                   |            |              |
| 8.A   |        | Filip Mitrovic                   |            |              |
| 9.A   |        |  Filip Mitrovic            |            |              |
| 10.A  |        |  Filip Mitrovic               |            |              |
| 11.A  |        |  Filip Mitrovic               |            |              |
| 12.A  |        | Filip Kritzner                |            |              |
| 13.A  |        | Filip Kritzner             |            |              |
| 14.A  |        |  Filip Kritzner                |            |              |
| 15.A  |        |  Filip Kritzner              |            |              |
| 16.A  |        |   Filip Kritzner            |            |              |
| 17.A  |        |    Filip Kritzner             |            |              |
| 18.A  |        |    Filip Kritzner             |            |              |
| 1.A   |        |    Filip Kritzner            |            |              |
| 19.A  |        |   Filip Kritzner              |            |              |
| 20.A  |        |   Raul Gilardoni               |            |              |
| 21.A  |        |  Raul Gilardoni               |            |              |
| 22.A  |        |  Raul Gilardoni               |            |              |
| 23.A  |        |  Raul Gilardoni               |            |              |
| 24.A  |        |  Raul Gilardoni               |            |              |





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


## 6 Auswerten

