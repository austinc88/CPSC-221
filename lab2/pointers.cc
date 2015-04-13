#include <iostream>

int main () {
    int* p1;
    int* p2;
    int x = 5;
    int y = 15;
    p1 = &x;      // x contains ____; y ____; p1 ____; p2 ____
    std::cout << "initial value of x is :" << x << std::endl;
    std::cout << "initial value of y is :" << y << std::endl;
    std::cout << "initial x address is :" << p1 << std::endl;
    p2 = &y;      // x contains ____; y ____; p1 ____; p2 ____
    std::cout << "initial y address is :" << p2 << std::endl;
    *p1 = 6;      // x contains ____; y ____; p1 ____; p2 ____
    *p1 = *p2;    // x ____; y ____; p1 ____; p2 ____    p2 = p1;
    *p1 = *p2+10; // x ____; y ____; p1 ____; p2 ____
    return 0;     
}