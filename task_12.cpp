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

    return guess;
}
double my3sqrt(double x) {
    int terms1 = 30;
    // Начальное приближение
    double guess1 = x / 2.0; // Начинаем с половины числа
    double previous_guess1;
    int i1;
    for (i1 = 0; i1 < terms1; ++i1) {
        previous_guess1 = guess1;
        guess1 = (guess1 - ((guess1 * guess1 * guess1 - x)  / (2 * guess1 * guess1))); // Метод Ньютона
        // Проверяем, достигли ли мы достаточной точности
        if (guess1 == previous_guess1)
            
            break;
    }
    return guess1;
}
int main() {
std::cout << "x^3 + px + q = 0" << std::endl;
double p, q, t1, t2;
double x1, x2;
std::cout << "Enter p: ";
std::cin >> p;
std::cout << "Enter q: ";
std::cin >> q;
t1 = (-q / 2) - (mysqrt((q * q / 4) + (p * p * p / 27)));
t2 = (-q / 2) + (mysqrt((q * q / 4) + (p * p * p / 27)));
if (t1 > 0 ) {
x1 = my3sqrt(t1) - (p / (3 * my3sqrt(t1)));

}
if (t2 > 0 ) {
x2 = my3sqrt(t2) - (p / (3 * my3sqrt(t2)));

}
if ((x1 != x2) && (t1 > 0) && (t2 > 0)) {
std::cout << x1 << ' ' << x2;   
}
if ((x1 =! x2) && (t1 >= 0))
std::cout << x1;
if ((x1 =! x2) && (t2 >= 0))
std::cout << x2;

    return 0;
}