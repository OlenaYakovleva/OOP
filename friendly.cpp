#include <iostream>
class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    friend void print(Point obj);
};

void print(Point obj)
{

    std::cout << "Hello world" << " " << obj.x << " " << obj.y << std::endl;
}

int main()
{
    Point p(10, 20), p1(30, 40);

    print(p);
    print(p1);
}

#include <iostream>

class B;

class A
{
    int valueA;

public:
    A(int value) : valueA(value) {}

    friend void sum(A objA, B objB);
};

class B
{
    int valueB;

public:
    B(int value) : valueB(value) {}

    friend void sum(A objA, B objB);
};

void sum(A, B);

int main()
{
    A o1(10);
    B o2(20);
    sum(o1, o2);
    sum(A(20), B(30));
}

void sum(A objA, B objB)
{
    std::cout << objA.valueA + objB.valueB << std::endl;
}

// Створіть клас 'Swap`, який містить дві змінні. Додайте дружню функцію, яка приймає
// об'єкт класу 'Swap та обмінює значення цих двох змінних.

#include <iostream>
using namespace std;

class Swap
{
private:
    int x, y;

public:
    // Constructor
    Swap(int x, int y) : x(x), y(y) {}

    friend void swapxy(Swap &obj);

    void showing()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

void swapxy(Swap &obj)
{
    int buf = obj.x;
    obj.x = obj.y;
    obj.y = buf;
}

int main()
{
    // object of the class Swap
    Swap obj(10, 20);
    obj.showing();

    swapxy(obj);

    cout << "The result after changes:" << endl;
    obj.showing();

    return 0;
}

// Напишіть клас`Array`, який представляє масив цілих чисел. Додайте дружню
// функцію, яка приймає об'єкт класу `Array` як параметр та виводить всі елементи цього масиву на екран.

#include <iostream>
using namespace std;

class Array
{
private:
    int *arr;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        arr = new int[size]; // nazwa massivu
    }

    ~Array()
    {
        delete[] arr;
    }

    void input()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    friend void printArray(Array &arr);
};

void printArray(Array &arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    Array arr(5);
    arr.input();
    printArray(arr);
    return 0;
}