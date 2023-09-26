#include <iostream>
#include <string>

using namespace std;

class Food {
public:
    string name;
    double price;
    double calories;

    Food(string name, double price, double calories) {
        this->name = name;
        this->price = price;
        this->calories = calories;
    }

    void Output() {
        cout << "Название: " << this->name << endl;
        cout << "Цена: " << this->price << endl;
        cout << "Калорийность: " << this->calories << endl;
    }
};

class Burger : public Food {
public:
    string sauce;
    string patty;

    Burger(string name, double price, double calories, string sauce, string patty) : Food(name, price, calories) {
        this->sauce = sauce;
        this->patty = patty;
    }

    void Output() {
        Food::Output();
        cout << "Соус: " << this->sauce << endl;
        cout << "Котлета: " << this->patty << endl;
    }
};

class Pizza : public Food {
public:
    string topping;
    double diameter;

    Pizza(string name, double price, double calories, string topping, double diameter) : Food(name, price, calories) {
        this->topping = topping;
        this->diameter = diameter;
    }

    void Output() {
        Food::Output();
        cout << "Топпинг: " << this->topping << endl;
        cout << "Диаметр: " << this->diameter << endl;
    }
};

int main() {
    setlocale(LC_ALL, "");

    Burger bigMac("Биг Мак", 250, 550, "Специальный соус", "Говядина");
    bigMac.Output();
    cout << endl;
    Pizza margherita("Маргарита", 400, 800, "Сыр, томаты, базилик", 30);
    margherita.Output();

    return 0;
}