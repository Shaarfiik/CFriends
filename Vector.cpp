#include <iostream>

class Vector {
private:
    double x;
    double y;

public:
    Vector(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // ������������� ������� ��� ���������� ��������� *
    friend Vector operator*(const Vector& vec, double scalar);

    void display() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }
};

Vector operator*(const Vector& vec, double scalar) {
    return Vector(vec.x * scalar, vec.y * scalar);
}

int main() {
    Vector vec(3, 4);
    double scalar = 2.5;

    Vector result = vec * scalar;
    std::cout << "�������� ������: ";
    vec.display();
    std::cout << "���������� �� ������ " << scalar << ": ";
    result.display();

    return 0;
}
