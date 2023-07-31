# 25.4.1-Surgeon-Simulator

Симулятор проведения операций
Что нужно сделать
Реализуйте простой симулятор проведения медицинской операции у пациента. Пользователь выступает в роли хирурга, который запрашивает инструменты у ассистента и применяет их сообразно ситуации.

Пользователь взаимодействует с программой с помощью команд. Команды не имеют сложной встроенной логики: они просто принимают нужные данные в качестве аргументов и выводят сообщения в консоль о выполнении. Данные команд — это одна или две двумерные точки в формате double с координатами X и Y соответственно.

Команда scalpel — принимает на вход две двумерные координаты начала и конца разреза или линии отсечения. При выполнении в консоль выводится сообщение о том, что был сделан разрез между введёнными координатами.

Команда hemostat принимает на вход одну точку, в которой требуется сделать зажим, о чём также сообщает в консоль.

Команда tweezers — пинцет, как и зажим, принимает одну точку для применения. Сообщение об этом выводится в консоль.

Команда suture — хирургическая игла, которая делает шов между двумя указанными точками.

Операция всегда начинается с команды scalpel и заканчивается командой suture. Для окончания работы программы их параметры-точки должны совпасть.

Программу требуется реализовать именно с помощью одного заголовочного файла и одного файла с исходным кодом (CPP). В заголовочном файле должны находиться функции-инструменты. В основном файле — основная логика программы, обработка ввода пользователя.

Советы и рекомендации
Создайте структуру с типом двумерной координаты (точки) вместе с набором функций для ввода этой координаты из консоли, её вывода в консоль и сравнения на предмет равенства. Для этих целей удобнее всего создать ещё один заголовочный файл.
Обратите внимание на порядок команд.
Заголовочные файлы с расширением .h следует расположить в папке include. Файлы исходного кода с расширением .cpp — в папке src.
Что оценивается
Все команды вводятся пользователем через стандартный ввод.
Программа и CMake-файл конфигурации проекта работают корректно.
Как отправить работу на проверку
На проверку пришлите архив, содержащий, помимо CPP- и H-файлов, файлы настройки проекта в среде CMake(CMakeLists.txt).
