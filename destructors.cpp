// Написать класс «массив». Реализовать в классе такие методы:
// • конструктор по умолчанию, конструктор с параметрами,
// • деструктор;
// • поиск элемента в массиве по ключу;
// • сортировка элементов по возрастанию;

#include <iostream>
#include <algorithm>
using namespace std;

class MyArray
{

private:
    int *elements;
    int size;

public:
    // Constructor default
    MyArray()
    {
        elements = 0;
        size = 0;
    }

    // Constructor with parameters
    // MyArray() : elements(nullptr), size(0) {}
    MyArray(int size) // constr get a size here
    {
        if (size > 0)
        {
            elements = new int[size]; // vidilennia dynamichnoj pamiati
            for (int i = 0; i < size; ++i)
                elements[i] = rand() % 10;
            this->size = size;
        }
        else
        {
            elements = nullptr;
            size = 0;
        }
    }

    // Destructor
    ~MyArray()
    {
        if (elements != nullptr)
            delete[] elements;
    }

    // Method to find element by key
    int find(int key)
    {
        for (int i = 0; i < size; ++i)
        {
            if (elements[i] == key)
            {
                return i;
            }
        }
        return -1;
    }

    // to print elements
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << elements[i] << " ";
        }
    }

    // Sorting elements
    void sortElements()
    {
        sort(elements, elements + size);
    }
};

int main()
{
    MyArray myArray(10);
    cout << "Massive: ";
    myArray.Print();

    int K = 5;
    myArray.find(K);

    myArray.sortElements();
    cout << "After sorting: ";
    myArray.Print();

    return 0;
}