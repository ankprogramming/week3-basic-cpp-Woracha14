#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14315926536;
    float r;
    float h;

    cout << "Please enter radius : ";
    cin >> r;

    cout << "Area of Circle : " << pi * r * r << endl;
    cout << "line of Circle : " << 2 * pi * r * r << endl;

    cout << "Please enter high : ";
    cin >> h;
    cout << "Area of Cylinder : " << pi * r * r * h << endl;




  return 0;
}
