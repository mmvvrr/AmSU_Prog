#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct point { int x, y;};


int main()
{
	setlocale(0, "");
	int n, i;
	point *a;
	point b;


	FILE *f;

	f=fopen("points.dat", "rb");

	fread(&n, sizeof(int), 1, f);

	cout << "В данном файле" << n << " позиций" <<endl;
	cout << "Введите вашу точку: ";
	cin >> b.x; cin >> b.y;

	a = new point[n];
	float *r;
	r = new float[n];

	fread(a, sizeof(point), n, f);

	for(i = 0; i < n; i++)
	{
		cout<< a[i].x << " ; " << a[i].y << endl;
	}

	for(i = 0; i < n; i++)
	{
		cout<< a[i].x << " ; " << a[i].y << endl;
		r[i] = sqrt(pow((a[i].x-b.x), 2) + pow((a[i].y-b.y), 2));
	}

	cout << "Вывод равноудаленных точек" << endl;

	for (i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (r[i] == r[j]) {cout << r[i] << "; " << "(" << a[i].x << ";" << a[i].y << ")" << endl;}
		}
	}

	fclose(f);

	return 0;
}
