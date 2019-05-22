#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <clocale>
#include <windows.h>
using namespace std;



class triangle
{
private: 
		float a, b, c;
public:
	
	
	triangle()	
	{
		a = 3;
		b = 4;
		c = 5;
	}
	
	triangle(float na, float nb, float nc): a(na), b(nb), c(nc){}

	triangle(int h, int s)
	{
		a = rand()%h + s;
		b = rand()%h + s;
		c = rand()%h + s;
	}
	
	float bereich(){
          return sqrt((a+b+c)*(b+c)*(a+c)*(b+c));
    }
	
	float perimeter(){
          return (a+b+c);
    }
	
	void getNaumbers(){
		cout << "a = " << a << endl << "d = " << b << endl << "c = " << c << endl;
		/*cout << "P = " << (a+b+c) << endl;
		cout << "S = " << sqrt((a+b+c)*(b+c)*(a+c)*(b+c)) << endl;*/
	}
    
    float getA()
    {return a;}
    float getB()
    {return b;}
    float getC()
    {return c;}
    ~triangle(){}
};

class pyramid : public triangle
{
      private:
              float h;
      public:
             pyramid(float a, float b, float c, float h): triangle(a,b, c), h(h){}
             
             float volume(){
                   return 1.0/3.0*(bereich()*h);
             }
             
             float squareSide(){
                   float f;
                   f = sqrt(pow(h,2)+pow(getA()/(2*tan(90)),2));
                   return 1.0/2*perimeter()*f;                   
             }

             bool operator==(pyramid value)
             {
             	return value.volume() == volume();
             }

             bool operator!=(pyramid value)
             {
              return value.volume() != volume();
             }

             bool operator>(pyramid value)
             {
              return value.volume() > volume();
             }

             bool operator<(pyramid value)
             {
              return value.volume() < volume();
             }

      ~pyramid(){}
      
};

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float da, db, dc, dh;
	int h, s, ch;
	bool r;
	
	cout << "Введите стороны треугольника и высоту"<< endl;
    cout << "ведите a: ";
    cin >> da;
    cout << "ведите b: ";
    cin >> db;
    cout << "ведите c: ";
    cin >> dc;
    cout << "ведите h: ";
    cin >> dh;
    pyramid pyroOne(da, db, dc, dh);
    
    cout << "Volume = " << pyroOne.volume() << endl;
	cout << "Площадь боковой поверхности= " << pyroOne.squareSide() << endl;
	

	cout << "Введите стороны треугольника и высоту"<< endl;
    cout << "ведите a: ";
    cin >> da;
    cout << "ведите b: ";
    cin >> db;
    cout << "ведите c: ";
    cin >> dc;
    cout << "ведите h: ";
    cin >> dh;
    pyramid pyroTwo(da, db, dc, dh);

	cout << "Volume = " << pyroTwo.volume() << endl;
	cout << "Площадь боковой поверхности= " << pyroTwo.squareSide() << endl;

	if (pyroOne!=pyroTwo){
		cout << "kek";
	}

   system("pause");
   return 0;
}

/*
Для выправки кодировки используется http://www.online-decoder.com/ru
параметры декода
ISO - 8859 - 1
to 
Windows - 1251
*/
