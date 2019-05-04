#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(0));
	setlocale(0, "");
	int n, i;
	int a;

	FILE *f;

	f=fopen("points.dat", "wb");

	n = rand()%10+10;

	cout << "Будет сгенерированно " << n << " точек" << endl;

	for (i = 0; i < n; i++)
	{
		a = i;
		fwrite(&a, sizeof(int), 1, f); 
	}

	fclose(f);

	return 0;
}