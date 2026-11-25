# Systeme und Netze – 4IA

Dieses Repository enthält fünf C-Programme aus dem Fach Systeme und Netze.

## Projekte

- `01_LinkedList` – einfach verkettete Liste
- `02_DoubleLinkedList` – doppelt verkettete Liste und Vergleich mit der einfach verketteten Liste
- `03_Bitoperationen` – Rechnen mit 16-Bit-Werten und Bitoperationen
- `04_Regelkreis/01_2PunktRegler` – Simulation eines Zweipunktreglers
- `04_Regelkreis/02_PIDRegler` – Simulation eines PID-Reglers

## Datentypen

Die Programme verwenden die üblichen C-Typen `int`, `unsigned int`, `double` und `char`. Für Werte mit festgelegter Bitbreite werden Typen aus `<stdint.h>` verwendet: `uint16_t` für die 16-Bit-Bitoperationen sowie `uint32_t` und `int32_t` für Listenpositionen, Größen und Suchergebnisse. `size_t` wird nur bei der Speicherreservierung mit `malloc` verwendet.

## CLion

Den gesamten Repository-Ordner mit der obersten `CMakeLists.txt` in CLion öffnen. Die fünf Programme werden als separate ausführbare Ziele eingerichtet. Benötigt werden CMake 3.21 oder neuer und ein C-Compiler mit C11-Unterstützung.
