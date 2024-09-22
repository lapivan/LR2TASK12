#include <iostream>

double mysqrt(double x) {
    int terms = 20;
    if (x < 0) {
        std::cerr << "Ошибка: нельзя вычислить квадратный корень отрицательного числа." << std::endl;
        return -1;
    }

    // Начальное приближение
    double guess = x / 2.0; // Начинаем с половины числа
    double previous_guess;

    for (int i = 0; i < terms; ++i) {
        previous_guess = guess;
        guess = (guess + x / guess) / 2.0; // Метод Ньютона
        // Проверяем, достигли ли мы достаточной точности
        if (guess == previous_guess)
            break;
    }

    return guess;
}
int main() {
std::cout << "ax^4 + bx^3 + cx^2 + bx + a = 0" << std::endl;
//a(x^2+1/x^2) + b(x + 1/x) +c =0
double x1, x2, x3, x4, a, b, c, t1, t2, d;
std::cout << "Enter a: ";
std::cin >> a;
std::cout << "Enter b: ";
std::cin >> b;
std::cout << "Enter c: ";
std::cin >> c;
//замена t = x + 1/x
d = (b * b) - (4 * a * (c - (2 * a)));
if (d > 0) {
    t1 = (-b - mysqrt(d)) / (2 * a);
    t2 = (-b + mysqrt(d)) / (2 * a);
    if (t1 >= 2 || t1 <= -2) {              //одз
    x1 = ((t1 - mysqrt(((t1 * t1) - 4))) / 2);
    x2 = ((t1 + mysqrt(((t1 * t1) - 4))) / 2);
    std::cout << x1 << x2; 
    }   
    if (t2 >= 2 || t2 <= -2) {
    x3 = ((t2 - mysqrt((t2 - 2) * (t2 + 2))) / 2);
    x4 = ((t2 + mysqrt(((t2 * t2) - 4))) / 2);
    std::cout << x3 << ' ' << x4; 
    }
    if ((t1 < 2 && t1 > -2) && (t2 < 2 && t2 > -2))
    std::cout << "no real roots";
  
}
else if (d = 0) {
    t1 = (-b / (2 * a));
    if (t1 >= 2 || t1 <= -2) {
    x1 = ((t1 - mysqrt(((t1 * t1) - 4)) ) / 2);
    x2 = ((t1 + mysqrt(((t1 * t1) - 4))) / 2);
    std::cout << x1 << x2; 
    } 
    else 
    std::cout << "no real roots";
}
else 
std::cout << "no real roots";


    return 0;
}