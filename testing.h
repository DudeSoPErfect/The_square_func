/*
    \file Заголовочный файл для обьявления функций.
 */

/*
    \brief Структура данных для тестировки корректности программы на вычисление
    количества корней и самих корней квадратного уравнения.
    Состоит из трех Коэффициентов "а", "b" и "с", количества корней и их значений.
 */
struct DataForTesting_t {
    float a;
    float b;
    float c;
    int nroots;
    float x_1;
    float x_2;
    float *s1;
    float *s2;
};

/*
    \brief Функция осуществляет проверку корректности вычислений
    \details является вспомогательной функцией для функции "testing"
    \param[in] arr - массив с данными корректных подсчетов. num_of_roots - количество корней текущего уравнения, i - индекс текущей проверки
    \param[out] x_1, x_2 - корни
 */
void validation(DataForTesting_t *arr, int num_of_roots, float x_1, float x_2, int i);

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



