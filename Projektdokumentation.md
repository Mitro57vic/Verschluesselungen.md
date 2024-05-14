# Projekt-Dokumentation



Filip Mitrovic, Filip Kritzner, Raul Gilardoni und Lennard Bühler

| Datum | Version | Zusammenfassung                                              |
| ----- | ------- | ------------------------------------------------------------ |
|   08.03.2024    | 0.0.1   |  Wir haben uns für ein Projekt entschieden und uns darüber informiert.|
|   15.03.2024    | 0.0.2   |  Wir haben angefangen unser Projekt zu implementieren und haben unsere Projektdokumentation erweitert.|
|   23.03.2024    | 0.0.3   |  |
|   06.04.2024    | 0.0.4   | |
|   26.04.2024    | 0.0.5   |  |
|   03.05.2024    | 1.0.0   |  |


## 1 Informieren

### 1.1 Ihr Projekt






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

Wir haben uns entschieden einen Timer einzubauen, da uns dies schon im letzten Projekt gut gelungen ist und es praktisch ist für unser Spiel.

Wir haben uns entschieden ein System einzubauen, dass bei 10 erzielten Punkten das Spiel beendet, damit das Spiel auch ein Punktlimit besitzt.


## 4 Realisieren

| AP-№ | Datum | Zuständig | geplante Zeit | tatsächliche Zeit |
| ---- | ----- | --------- | ------------- | ----------------- |
| 1.A  |    29.11.2022     |    Lennard Bühler       |      30 min         |        25 min           |

|Total|       |        |          |       |



## 5 Kontrollieren

### 5.1 Testprotokoll

| TC-№ | Datum | Resultat | Tester |
| ---- | ----- | -------- | ------ |
| 1.1  |    13.12.2022   |     Funktioniert nicht     |  Mitrovic+Meister      |


`Fazit:`

Die wichtigsten Teile des Programmes sind mit Erfolg ausgegangen, somit ist unser Programm spielbar. Doch Leider konnten wir wegen geringer Zeit nicht alle unsere Wünsche für das Programm erfüllen.

## 6 Auswerten

