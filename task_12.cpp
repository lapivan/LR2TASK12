#include <iostream>
#include <cmath>
int main() {
std::cout << "x^3 + px + q = 0" << std::endl;
double x1, x2, p, q, t1, t2;
std::cout << "Enter p: ";
std::cin >> p;
std::cout << "Enter q: ";
std::cin >> q;
t1 = (-q / 2) - (sqrt((pow(q, 2) / 4) + (pow(p, 3) / 27)));
t2 = (-q / 2) + (sqrt((pow(q, 2) / 4) + (pow(p, 3) / 27)));
if (t1 > 0 ) {
x1 = pow(t1, 1./3) - (p / (3 * pow(t1, 1./3)));
}
if (t2 > 0 ) {
x2 = pow(t2, 1./3) - (p / (3 * pow(t2, 1./3)));
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