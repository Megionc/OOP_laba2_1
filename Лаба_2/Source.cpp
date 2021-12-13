#include<iostream>
#include <list>

class Circle
{
	public:
		int x, y, r;
		Circle() 
		{
			printf("Конструктор без параметров\n");
			x = 0;
			y = 0;
			r = 0;
		}
		Circle(int x, int y, int r)
		{
			printf("Конструктор с параметрами\n");
			this -> x = x;
			this -> y = y;
			this -> r = r;
		}
		Circle(const Circle &p)
		{
			printf("Конструктор с параметром-объектом того же класса\n");
			x = p.x;
			y = p.y;
			r = p.r;
		}
		~Circle()
		{
			printf("Деструктор\n");
			printf("%d, %d, %d\n", x, y, r);		
		}
};


int main()
{
	setlocale(LC_ALL, "RUS");
	{

		//статическое создание объектов 
		Circle t;
		Circle s(5, 4, 9);
		Circle v(s);
	}

	// динамическое создание объектов
	Circle *d = new Circle;
	Circle *f = new Circle(5, 4, 9);
	Circle *g = new Circle(*f);

	delete d;
	delete f;
	delete g;

	return 0;
}

