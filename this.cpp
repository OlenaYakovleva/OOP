// Реалізація методів за межами класу
// Спискова ініціалізація

class Titan
{
    std::string _name;
    int m_age;
    const int size;

public:
    Titan(std::string name, int conssst) : _name(name), m_age(0), size(conssst)
    {
        // size = conssst;
    }

    void showName_Titan();
};

void Titan::showName_Titan()
{
    std::cout << _name << ' ' << m_age << ' ' << size << std::endl;
}

int main()
{
    Titan b("Mark", 10);

    b.showName_Titan();
}

// THIS*

class MyClass
{
public:
    void SetData(int Data)
    {
        data = Data; // Використовуємо this для доступу до змінної-члена data
    }

    int GetData()
    {
        return this->data; // Використовуємо this для отримання значення data
    }

    void GetPtr()
    {
        std::cout << this << std::endl;
    }

private:
    int data;
};

int main()
{
    MyClass obj;
    obj.SetData(42); // Встановлюємо значення data за допомогою методу SetData

    obj.GetPtr();

    std::cout << "Data: " << obj.GetData() << std::endl; // Отримуємо значення data за допомогою методу GetData

    return 0;
}

// https://youtu.be/Ic19I0kcBnU - Дружні функції та класи приклад
// https://youtu.be/SiOfT03jSU0 - Дружні класи. ООП. friend class.

// Дружні функції