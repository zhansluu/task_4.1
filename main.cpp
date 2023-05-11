#include <iostream>
#include <cmath>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(0, "Russian");
    cout << "Задание 4.1. Приближённое вычисление интеграла по квадратурным формулам." << endl << endl;
    cout << "Выберите функцию, с которой хотите работать:" << endl
         << "0-3 - многочлен соответствующей степени;" << endl
         << "4 - функция f(x)=6*x^2+cos(x)*exp(4x)" << endl
         << "5 - конец работы" << endl;

    size_t num;
    cin >> num;
    while (num != 0 && num != 1 && num != 2 && num != 3 && num != 4 && num!= 5)
    {
        cout << "Введено неверное значение! Повторите попытку.";
        cin >> num;
    }

    double a, b, J;
    cout << "Введите нижний предел интегрирования: а = ";
    cin >> a;
    cout << "Введите верхний предел интегрирования: b = ";
    cin >> b;

    while (num != 5){
        switch (num){
        case 0:
            cout << endl << "Работаем с многочленом f(x)=12" << endl;
            J = integralOfPolinom0degree(b) - integralOfPolinom0degree(a);
            cout << "Точное значение интеграла: J = " << J << endl;
            cout << "КФ левого прямоугольника: J(h) = " << leftRectangles(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-leftRectangles(0, a, b)) << endl
                 << "КФ правого прямоугольника: J(h) = " << rightRectangles(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-rightRectangles(0, a, b)) << endl
                 << "КФ среднего прямоугольника: J(h) = " << middleRectangles(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-middleRectangles(0, a, b)) << endl
                 << "КФ трапеции: J(h) = " << trapeze(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-trapeze(0, a, b)) << endl
                 << "КФ Симпсона: J(h) = " << simpson(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-simpson(0, a, b)) << endl
                 << "КФ 3/8: J(h) = " << threeEighths(0, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-threeEighths(0, a, b)) << endl
                 <<"------------------------------------------" << endl;
            cin >> num;
            break;
        case 1:
            cout  << endl << "Работаем с многочленом f(x)=x-4" << endl;
            J = integralOfPolinom1degree(b) - integralOfPolinom1degree(a);
            cout << "Точное значение интеграла: J = " << J << endl;
            cout << "КФ левого прямоугольника: J(h) = " << leftRectangles(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-leftRectangles(1, a, b)) << endl
                 << "КФ правого прямоугольника: J(h) = " << rightRectangles(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-rightRectangles(1, a, b)) << endl
                 << "КФ среднего прямоугольника: J(h) = " << middleRectangles(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-middleRectangles(1, a, b)) << endl
                 << "КФ трапеции: J(h) = " << trapeze(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-trapeze(1, a, b)) << endl
                 << "КФ Симпсона: J(h) = " << simpson(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-simpson(1, a, b)) << endl
                 << "КФ 3/8: J(h) = " << threeEighths(1, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-threeEighths(1, a, b)) << endl
                 <<"------------------------------------------" << endl;
            cin >> num;
            break;
        case 2:
            cout << endl << "Работаем с многочленом f(x)=3*x^2+4*x-3" << endl;
            J = integralOfPolinom2degree(b) - integralOfPolinom2degree(a);
            cout << "Точное значение интеграла: J = " << J << endl;
            cout << "КФ левого прямоугольника: J(h) = " << leftRectangles(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-leftRectangles(2, a, b)) << endl
                 << "КФ правого прямоугольника: J(h) = " << rightRectangles(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-rightRectangles(2, a, b)) << endl
                 << "КФ среднего прямоугольника: J(h) = " << middleRectangles(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-middleRectangles(2, a, b)) << endl
                 << "КФ трапеции: J(h) = " << trapeze(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-trapeze(2, a, b)) << endl
                 << "КФ Симпсона: J(h) = " << simpson(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-simpson(2, a, b)) << endl
                 << "КФ 3/8: J(h) = " << threeEighths(2, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-threeEighths(2, a, b)) << endl
                 <<"------------------------------------------" << endl;
            cin >> num;
            break;
        case 3:
            cout << endl << "Работаем с многочленом f(x)=4*x^3-6*x^2+7*x-10" << endl;
            J = integralOfPolinom3degree(b) - integralOfPolinom3degree(a);
            cout << "Точное значение интеграла: J = " << J << endl;
            cout << "КФ левого прямоугольника: J(h) = " << leftRectangles(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-leftRectangles(3, a, b)) << endl
                 << "КФ правого прямоугольника: J(h) = " << rightRectangles(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-rightRectangles(3, a, b)) << endl
                 << "КФ среднего прямоугольника: J(h) = " << middleRectangles(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-middleRectangles(3, a, b)) << endl
                 << "КФ трапеции: J(h) = " << trapeze(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-trapeze(3, a, b)) << endl
                 << "КФ Симпсона: J(h) = " << simpson(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-simpson(3, a, b)) << endl
                 << "КФ 3/8: J(h) = " << threeEighths(3, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-threeEighths(3, a, b)) << endl
                 <<"------------------------------------------" << endl;
            cin >> num;
            break;
        case 4:
            cout << endl << "Работаем с f(x)=6*x^2+cos(x)*exp(4x)" << endl;
            J = integralOfFunc(b) - integralOfFunc(a);
            cout << "Точное значение интеграла: J = " << J << endl;
            cout << "КФ левого прямоугольника: J(h) = " << leftRectangles(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-leftRectangles(4, a, b)) << endl
                 << "КФ правого прямоугольника: J(h) = " << rightRectangles(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-rightRectangles(4, a, b)) << endl
                 << "КФ среднего прямоугольника: J(h) = " << middleRectangles(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-middleRectangles(4, a, b)) << endl
                 << "КФ трапеции: J(h) = " << trapeze(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-trapeze(4, a, b)) << endl
                 << "КФ Симпсона: J(h) = " << simpson(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-simpson(4, a, b)) << endl
                 << "КФ 3/8: J(h) = " << threeEighths(4, a, b) << endl
                 << "Абсолютная фактическая погрешность: |J - J(h)| = " << fabs(J-threeEighths(4, a, b)) << endl
                 <<"------------------------------------------" << endl;
            cin >> num;
            break;
        case 5:
            return 0;
        }
    }
}
