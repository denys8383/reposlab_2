// Lab_02.cpp 
// Барчук Денис 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 2 

#include <iostream> 

using namespace std;

int main() {
    double x;  // вхідний параметр 
    double z1; // результат обчислення 1-го виразу     
    //double z2; // результат обчислення 2-го виразу 
    const double PI = 4 * atan(1.0); // значення числа PI

    cout << "x = "; cin >> x;
    z1 = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
    //z2 = 2 * sqrt(2) * cos(x) * sin(PI / 4 + 2 * x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    //cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;
}
