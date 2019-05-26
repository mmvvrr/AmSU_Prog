#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

class triangle
{
	public:
		virtual float perimetr()=0;
		virtual float berich(void)=0;
		virtual float angle()=0;
};

class polygon: public triangle
{
protected:
	float stor;
	int numTriang;
public:
	polygon()
	{
		cin >> stor;
		cin >> numTriang;
	}

	float perimetr()
	{
		return stor * numTriang;
	}

	float berich()
	{
		return (sqrt(3)/4)*pow(numTriang, 2);
	}

	float angle()
	{
		return ((stor-2)/stor) * 180;
	}


};

int main()
{
	const int n = 3;
	polygon poly[n];

	triangle *trio = &poly[0];

	for (int i = 0; i < n; i++)
	{
		cout << "Per = " <<poly[i].perimetr() << endl;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Ber = " <<(trio + i)->berich() << endl;
	}


for (int i = 0; i < n; i++)
	{
		cout << "Ang = " <<(trio + i)->angle() << endl;
	}


}
