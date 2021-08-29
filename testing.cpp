/*
    \file Заголовочный файл для обьявления функций.
 */

/*
    \brief Структура данных для тестировки корректности программы на вычисление
    количества корней и самих корней квадратного уравнения.
    Состоит из трех Коэффициентов "а", "b" и "с", количества корней и их значений.
 */
struct DataForTesting_t;

/*
    \brief Функция подставяет неизменные значения на места переменных коэффициентов
    квадратного уравнения и проверяет корректность его решения.
    \details Принимает на вход количество корней, и два корня в виде констант.
    Выводит на экран значение "ОК", за каждый пройденный, заранее составленный тест.
    При выявлении ошибки в подсчетах, выводит на экран информацию об ошибке,
    дополняя это значениями коэффициентов, тем что ожидалось получить и тем,
    что получилось в результате вычислений.
    \param[in] num_of_roots - количество корней
    \param[out]  x_1, x_2 - корни
 */
void testing();



