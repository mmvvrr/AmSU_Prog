#include <iostream>

using namespace std;

struct point { int x, y;};

int main()
{
	setlocale(0, "");
	int n, i;
	point *a;

	FILE *f;

	f=fopen("points.dat", "rb");

	fread(&n, sizeof(int), 1, f);

	cout << n << endl;

	a = new point[n];

	fread(a, sizeof(point), n, f);

	for(i = 0; i < n; i++)
	{
		cout<< a[i].x << " ; " << a[i].y << endl;
	}

	fclose(f);

	return 0;
}
