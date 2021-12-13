#include<iostream>
#include <list>

class Circle
{
	public:
		int x, y, r;
		Circle() 
		{
			printf("����������� ��� ����������\n");
			x = 0;
			y = 0;
			r = 0;
		}
		Circle(int x, int y, int r)
		{
			printf("����������� � �����������\n");
			this -> x = x;
			this -> y = y;
			this -> r = r;
		}
		Circle(const Circle &p)
		{
			printf("����������� � ����������-�������� ���� �� ������\n");
			x = p.x;
			y = p.y;
			r = p.r;
		}
		~Circle()
		{
			printf("����������\n");
			printf("%d, %d, %d\n", x, y, r);		
		}
};


int main()
{
	setlocale(LC_ALL, "RUS");
	{

		//����������� �������� �������� 
		Circle t;
		Circle s(5, 4, 9);
		Circle v(s);
	}

	// ������������ �������� ��������
	Circle *d = new Circle;
	Circle *f = new Circle(5, 4, 9);
	Circle *g = new Circle(*f);

	delete d;
	delete f;
	delete g;

	return 0;
}

