#include <iostream>
#include <cmath>
int main() {
   double x1, x2, x3, x4, a, b, c, t1, t2, d;
std::cout << "ax^4 + bx^2 + c = 0" << std::endl;
std::cout << "Enter a: ";
std::cin >> a;
std::cout << "Enter b: ";
std::cin >> b;
std::cout << "Enter c: ";
std::cin >> c;
d = (b * b) - (4 * a * c);
if (d > 0) {
    t1 = (-b - sqrt(d)) / (2 * a);
    t2 = (-b + sqrt(d)) / (2 * a);
    if (t1 > 0) {
    x1 = sqrt(t1);
    x2 = -sqrt(t1);
    std::cout << x1 << x2; 
    }
    if (t2 > 0) {
    x3 = sqrt(t2);
    x4 = -sqrt(t2);
    std::cout << x3 << x4; 
    }
    if (t1 && t2 < 0)
    std::cout << "no real roots";
  
}
else if (d = 0) {
    t1 = (-b / (2 * a));
    if (t1 > 0) {
    x1 = sqrt(t1);
    x2 = -sqrt(t1);
    std::cout << x1 << x2; 
    } 
    else 
    std::cout << "no real roots";
}
else 
std::cout << "no real roots";


    return 0;
}