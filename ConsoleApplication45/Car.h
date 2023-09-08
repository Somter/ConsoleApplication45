#pragma once	
class Car
{
	char* model;
	char* color;
	int year;
	double price;	
public:
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();	
	void input();
	void Print();

	// инспекторы 
	char* GetModel();	
	char* GetColor();
	int GetYear();
	double GetPrice();

	// модификаторы
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetYear(int y);
	void SetPrice(double pr);		

};

