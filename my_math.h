#ifndef LAB3_1_POPIVNYCH_RB61_MY_MATH_H
#define LAB3_1_POPIVNYCH_RB61_MY_MATH_H

/**
 * @brief Обчислює значення вихідної математичної функції f(x).
 *
 * @param x точка (аргумент), у якій обчислюється функція.
 * @return double Значення функції f(x) у точці x.
 */
double func(double x);

/**
 * @brief обчислює аналітичну першу похідну функції f'(x).
 *
 * використовує правило диференціювання складеної степеневої функції.
 *
 * @param x точка (аргумент), у якій обчислюється похідна.
 * @return double Значення похідної f'(x) у точці x.
 */
double dfunc(double x);

#endif //LAB3_1_POPIVNYCH_RB61_MY_MATH_H