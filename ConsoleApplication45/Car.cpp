#include<iostream> 
#include "Car.h"
using namespace std;    

Car::Car()
{
    model = nullptr;    
    color = nullptr;
    year = 0;
    price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
    this->model = new char[strlen(m) + 1];  
    strcpy_s(model, strlen(m) + 1, m);  

    this->color = new char[strlen(c) + 1];  
    strcpy_s(color, strlen(c) + 1, c);   

    this->price = pr;
    this->year = y; 
}

Car::~Car()
{
    delete[] model; 
    delete[] color; 
}

void Car::input()   
{
    int choiseNew;  
    cout << "What do you want to change?:" << endl;
    cout << "1 - model " << endl;
    cout << "2 - color " << endl;
    cout << "3 - year " << endl;
    cout << "4 - price " << endl;
    cout << "5 - all meanings " << endl;    
    cout << "Yuor choise: ";    
    cin >> choiseNew;   
    switch (choiseNew)  
    {
    case 1: 
        cout << "Enter model: ";
        cin >> model;     
        break;
    case 2:
        cout << "Enter color: ";
        cin >> color;
        break;
    case 3:
        cout << "Enter year: ";
        cin >> year;    
        break;
    case 4:
        cout << "Enter price: ";    
        cin >> price;   
        break; 
    case 5:
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter color: ";
        cin >> color;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;   
        break;
    }

}

void Car::Print()
{
    cout << "-------------------------" << endl;    
    cout << "Model: " << model << endl; 
    cout << "Color: " << color << endl;     
    cout << "Year: " << year << endl; 
    cout << "Price: " << price << "$" << endl;  
    cout << "-------------------------" << endl;    
}

char* Car::GetModel()
{
    return model;
}

char* Car::GetColor()
{
    return color;
}

int Car::GetYear()
{
    return year;    
}

double Car::GetPrice()
{
    return price;   
}

void Car::SetModel(const char* m)
{
    if (model != nullptr) 
    {
        cout << model << "...delete\n"; 
        delete[] model; 
    }
    this->model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);          
}

void Car::SetColor(const char* c)
{
    if (color != nullptr)
    {
        cout << color << "...delete\n";         
        delete[] color; 
    }
    this->color = new char[strlen(c) + 1];  
    strcpy_s(color, strlen(c) + 1, c);         
}

void Car::SetYear(int y)
{
    if (y != 0) 
    {
        cout << year << "...delete\n";  
        year = 0;   
    }
    year = y;   
}

void Car::SetPrice(double pr)
{
    if (price != 0.0) 
    {
        cout << price << "...delete\n"; 
        price = 0.0;    
    }
    price = pr; 
}
