// LTCB_GIAIPHUONGTRINHBATHAI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Chuong trinh giai phuong trinh bat hai";
    int a, b, c;
    double x1, x2, delta;
    cout << "Nhap a b c: \n"; 
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo nghiem";
        }
        else {
            x1 = -c / b;
            cout << "Phuong trinh co 1 nghiem " << x1 << "\n";
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0 ) {
            cout << "Phuong trinh vo nghiem";
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem\n" << x1 << "\n" << x2;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
