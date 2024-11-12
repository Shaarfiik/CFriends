#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // ������������� ������� ��� ��������� �������� ���� ���������������
    friend bool compareArea(const Rectangle& rect1, const Rectangle& rect2);
};

bool compareArea(const Rectangle& rect1, const Rectangle& rect2) {
    return (rect1.width * rect1.height) > (rect2.width * rect2.height);
}

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2(4, 12);

    if (compareArea(rect1, rect2)) {
        std::cout << "������ ������������� ������ ������� �� �������." << std::endl;
    }
    else {
        std::cout << "������ ������������� �� ������ ������� �� �������." << std::endl;
    }

    return 0;
}
