#include <iostream>
using namespace std;

enum Color {
    Red,
    Green,
    Blue
};

class Shape {
public:
    int width;
    int height;
};

int main() {
    Color c = Green;

    Shape shape;
    shape.width = 10;
    shape.height = 5;

    cout << "Color: " << c;
    cout << "Width: " << shape.width << ", Height: " << shape.height;

    return 0;
}
