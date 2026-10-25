#include<stdio.h>
#include<locale.h>
#include<math.h>
#define M_PI 3.14
int main()
{
	setlocale(LC_CTYPE, "UTF-8");

	double a = 0.0;
	double b = 2.0;
	double h, x, y;
	double minY = 100000;
	double maxY = 0;
	double xMin = 10000;
	double xMax = 0;
	double e = 0.000000000001;

	printf("¬ведите шаг h: ");
	scanf("%lf", &h);
	printf("     x     |     y       \n");
	printf("------------------------\n");

	for (x = a; x <= b + e || x <= b - e; x += h)
	{
		y = pow(x, 2.0) - pow(cos(M_PI * x), 2.0);
		printf("   %5.2lf   |  %5.2lf   \n", x, y);

	}


}