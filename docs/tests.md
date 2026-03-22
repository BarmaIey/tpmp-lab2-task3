
## 2. Функции для структуры MARSHRUT

**Тест 1**  
Входные данные:
Number of routes: 3
101 Minsk Brest 350.5
102 Minsk Vitebsk 280.0
103 Gomel Minsk 310.2
Поиск: Minsk
Ожидаемый вывод:
- Максимальная длина: 101 Minsk Brest 350.50
- После сортировки (если вывести все): 101, 102, 103
- Поиск: три маршрута (101, 102, 103)

Фактический вывод: Совпадает

Тест пройден: Да

**Тест 2**
Number of routes: 2

Route 1
Number: 5
Start point: CityA
End point: CityB
Length: 100.0

Route 2
Number: 3
Start point: CityB
End point: CityC
Length: 200.0

Enter point to search: CityB

Ожидаемый вывод:
Longest route:
3 CityB CityC 200.00

Routes after sorting:
3 CityB CityC 200.00
5 CityA CityB 100.00

Routes with point CityB:
3 CityB CityC 200.00
5 CityA CityB 100.00

Фактический вывод: Совпадает

Тест пройден: Да
