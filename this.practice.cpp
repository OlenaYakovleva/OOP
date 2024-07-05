// Задача: Напишіть клас, який представляє прямокутник з координатами вершини та шириною та висотою. Використовуйте спискову ініціалізацію для ініціалізації полів класу. Визначте метод, який обчислює площу прямокутника. Використайте вказівник 'this' для доступу до полів класу.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;

public:
    // Конструктор з списковою ініціалізацією
    Rectangle(int width, int height) : width(width), height(height) {}
    // Метод для обчислення площі
    int squarem()
    {
        return this->width * this->height; // multiply zminni, zvertajemos
    };
    // to show the infos
    void print()
    {
        cout << this->width << " and height " << this->height << endl;
    }
};

int main()
{
    Rectangle rect(3, 4);
    rect.print();
    cout << "Square: " << rect.squarem() << endl;
}
