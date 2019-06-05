#include <list>
#include <iostream>
#include <math.h>

using namespace std;

class triangle
{
protected:
	float t_side;
public:
	triangle(float side): t_side(side){};

	virtual float perimetr()=0;
	virtual float berich(void)=0;
	virtual float angle()=0;
	virtual void show()=0;
	~triangle(){
	};
	
};

class polygon : public triangle
{
protected:
	int num;
public:
	polygon(float side, int nums): triangle(side), num(nums){};

	void show()
	{
		printf("Side = %0.1f\tNums = %d\n",t_side, num);
	}

	float perimetr()
	{
		return t_side * num;
	}

	float berich()
	{
		return (sqrt(3)/4)*pow(num, 2);
	}

	float angle()
	{
		return ((t_side-2)/t_side) * 180;
	}


	~polygon(){
	};
	
};

int main()
{
	list<polygon> poly;
	printf("Input User Side and User Nums\n");
	float a;
	int b;
	scanf ("%f%*c%d", &a, &b);
	polygon user(a, b);
	list<polygon>::iterator i;
	list<polygon>::iterator c;
	for (int j = 0; j < 5; j++)
	{
		float a;
		int b;
		printf("Input Side and Nums\n");
		scanf ("%f%*c%d", &a, &b);
		polygon obj(a, b);
		poly.push_back(obj);
	}

	for(i = poly.begin(); i != poly.end(); i++)
    {
    	i->show();
	}
	
	for(i = poly.begin(); i != poly.end(); i++)
    {
    	//if(i->berich()>=user.berich())
    	//{
    	c = i;
    		poly.erase(c); 
    	//}
	}

	for(i = poly.begin(); i != poly.end(); i++)
    {
    	i->show();
	}


	return 0;
}
