#include <iostream>
#include <math.h>

class triangle
{
private: 
	{
		float a, b, c;
		float P, S;
	}
public:
	triangle(float na, float nb, float nc)
	{
		a = na;
		b = nb;
		c = nc;

		P = (1\2)*(a+b+c);
		S = sqrt(P*(P-a)*(P-b)*(P-c))

		cout << ""
	}

	triangle(int h)
	{
		if (h == 1){
			cout << "Периметр равен: " << P;
		}
		else{
			cout << "Площадь равна: " << S;
		}
	}

	triangle()
	{
		cout << "Сторона A = " << a << endle 
			 << "Сторона B = " << b << endle 
			 << "Сторона C = " << c << endle 
			 << "Периметр P = "<< P << endle 
			 << "Площадь S = " << S << endle;
	}	
};