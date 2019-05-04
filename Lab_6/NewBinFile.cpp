#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct point { int x, y;};

int main()
{
	srand(time(0));
	setlocale(0, "");
	int n, i;
	point a;

	FILE *f;

	f=fopen("points.dat", "wb");

	n = rand()%10+10;
	fwrite(&n, sizeof(int), 1, f);

	cout << "Будет сгенерированно " << n << " точек" << endl;

	for (i = 0; i < n; i++)
	{
		a.x = rand()% 100;
		a.y = rand()% 100;
		fwrite(&a, sizeof(point), 1, f); 
	}

	fclose(f);

	return 0;
}