#include <iostream>
#include <math.h>

using namespace std;



class triangle
{
private: 
		float a, b, c;
		float P, S;
public:
	
	
	triangle()	
	{
		a = 3;
		b = 4;
		c = 5;
	}
	triangle(float na, float nb, float nc): a(na), b(nb), c(nc){
	}

	triangle(int h, int s)
	{
		a = rand()%h + s;
		b = rand()%h + s;
		c = rand()%h + s;
	}
	
	void getNaumbers(){
		cout << "a = " << a << "d = " << b << "c = " << c << endl;
		cout << "P = " << (a+b+c) << endl;
		cout << "S = " << sqrt((a+b+c)*(b+c)*(a+c)*(b+c))
	}
	
};

int main()
{
	setlocale(0, "");
	float da, db, dc;
	cin >> da;
	cin >> db;
	cin >> dc;
	
	triangle obj;
	
	obj.getNaumbers();
}
