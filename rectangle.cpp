#include <iostream>

using namespace std;

int main() {
    int length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout<< "Enter breadth of rectange: ";
    cin >> breadth;

    cout << "Perimeter of rectangle: " << 2*(length+breadth) << "\n";
    cout << "Area of rectange: " << length*breadth << "\n";

    return 0;
}