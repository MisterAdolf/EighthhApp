#include <iostream>

using namespace std;

struct Square {
private:
    int side;
public:
    Square() {
        side = 5;
    }
    Square(int side) {
        this->side = side;
    }
    void AssignSide(int side) {
        this->side = side;
    }
    void PrintPerimeter() {
        cout << side * side;
    }
    void PrintArea() {
        cout << side * side;
    }
};

struct Rectangle {
private:
    int firstSide;
    int secondSide;
public:
    Rectangle() {
        firstSide = 5;
        secondSide = 10;
    }
    Rectangle(int firstSide, int secondSide) {
        this->firstSide = firstSide;
        this->secondSide = secondSide;
    }
    void AssignSide(int firstSide, int second_side) {
        this->firstSide = firstSide;
        this->secondSide = second_side;
    }
    void PrintPerimeter() {
        cout << firstSide + secondSide;
    }
    void PrintArea() {
        cout << firstSide * secondSide;
    }
};

struct Rombus {
private:
    int firstDiagonale;
    int secondDiagonale;
public:
    Rombus() {
        firstDiagonale = 10;
        secondDiagonale = 10;
    }
    Rombus(int firstDiagonale, int secondDiagonale) {
        this->firstDiagonale = firstDiagonale;
        this->secondDiagonale = secondDiagonale;
    }
    void AssignSide(int firstDiagonale, int secondDiagonale) {
        this->firstDiagonale = firstDiagonale;
        this->secondDiagonale = secondDiagonale;
    }
    void PrintPerimeter() {
        cout << firstDiagonale + secondDiagonale;
    }
    void PrintArea() {
        cout << firstDiagonale * secondDiagonale;
    }

};


int main()
{
    Square obj;
    cout << "Perimeter: ";
    obj.PrintPerimeter();
    cout << "-------";
    cout << "SquareArea: ";
    obj.PrintArea();

    Rectangle obj;
    cout << "Perimeter: " << endl;
    obj.PrintPerimeter();
    cout << "-------";
    cout << "SquareArea: ";
    obj.PrintArea();

    Rombus obj;
    cout << "Perimeter: " << endl;
    obj.PrintPerimeter();
    cout << "-------";
    cout << "SquareArea: ";
    obj.PrintArea();

}
