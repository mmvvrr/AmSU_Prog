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
};

class pyramid : public triangle
{
      private:
              float h;
      public:
             pyramid(float a, float b, float c, float h): triangle(a,b, c), h(h){}
             
             float Volume(){
                   return 1.0/3.0*(bereich()*h);
             }
             
             float squareSide(){
                   float f;
                   f = sqrt(pow(h,2)+pow(getA()/(2*tan(90)),2));
                   return 1.0/2*perimeter()*f;                   
             }
      
};

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float da, db, dc;
	int h, s, ch;
	cout << "Выберете способ ввода(1 - ручной, 2 - рандом, 3 - стандартный): ";
	cin >> ch;
	switch(ch)
	{
              case 1:
                   {cout << "Введите стороны треугольника"<< endl;
                   cout << "Введите a: ";
                   cin >> da;
                   cout << "Введите b: ";
	               cin >> db;
	               cout << "Введите c: ";
	               cin >> dc;
	               triangle obj(da, db, dc);
               	   obj.getNaumbers();
               	   cout << "P = " << obj.perimeter() << endl;
       	   	       cout << "S = " << obj.bereich() << endl;
	               break;}
              case 2:
                   {cout << "Введите пределы рандома для сторон треугольника(от/до)"<< endl;
                   cin >> h;
	               cin >> s;
	               triangle obj(s, h);
               	   obj.getNaumbers();
               	   cout << "P = " << obj.perimeter() << endl;
       	   	       cout << "S = " << obj.bereich() << endl;
                   break;}
              case 3:
                   {cout << "Создание египетского треугольника"<< endl;
                   triangle obj;
             	   obj.getNaumbers();
         	   	   cout << "P = " << obj.perimeter() << endl;
       	   	       cout << "S = " << obj.bereich() << endl;
                   break;}
    }
	
   system("pause")
   ;
}
