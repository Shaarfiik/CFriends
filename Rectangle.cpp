#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Дружественная функция для сравнения площадей двух прямоугольников
    friend bool compareArea(const Rectangle& rect1, const Rectangle& rect2);
};

bool compareArea(const Rectangle& rect1, const Rectangle& rect2) {
    return (rect1.width * rect1.height) > (rect2.width * rect2.height);
}

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2(4, 12);

    if (compareArea(rect1, rect2)) {
        std::cout << "Первый прямоугольник больше второго по площади." << std::endl;
    }
    else {
        std::cout << "Первый прямоугольник не больше второго по площади." << std::endl;
    }

    return 0;
}
