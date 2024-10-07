#include <iostream>

double mysqrt(double x) {
    int terms = 20;

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
    if (x==0)
    guess = 0;
    return guess;
}
int main() {
   double x1, x2, x3, x4, a, b, c, t1, t2, d;
std::cout << "ax^4 + bx^2 + c = 0" << std::endl;
std::cout << "Enter a: ";
std::cin >> a;
std::cout << "Enter b: ";
std::cin >> b;
std::cout << "Enter c: ";
std::cin >> c;
if ((a == 0) && (b == 0) && (c == 0)) {
    std::cout << "every number";
}
if ((a == 0) && (b == 0) && (c != 0)) {
    std::cout << "no real roots";
}
d = (b * b) - (4 * a * c);
if (d > 0) {
    t1 = (-b - mysqrt(d)) / (2 * a);
    t2 = (-b + mysqrt(d)) / (2 * a);
    if (t1 >= 0) {
    x1 = mysqrt(t1);
    x2 = -mysqrt(t1);
    std::cout << x1 << x2; 
    }
    if (t2 >= 0) {
    x3 = mysqrt(t2);
    x4 = -mysqrt(t2);
    std::cout << x3 << x4; 
    }
    else if(t2 == 0) {
        x3 = 0;
        std::cout << x3;
    }

    if (t1 && t2 < 0)
    std::cout << "no real roots";
  
}
else if (d == 0) {
    t1 = (-b / (2 * a));
    if (t1 > 0) {
    x1 = mysqrt(t1);
    x2 = -mysqrt(t1);
    std::cout << x1 << x2; 
    }
    if (t1 > 0) {
    x1 = mysqrt(t1);
    x2 = -mysqrt(t1);
    std::cout << x1 << x2; 
    }
    else if (t1 == 0) {
    x1 = mysqrt(t1);
    std::cout << x1; 
    }
    } 
    else 
    std::cout << "no real roots";
    return 0;
}