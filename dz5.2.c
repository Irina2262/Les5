#include <stdio.h>

int nod(int a, int b)
{
int t;
    while (b != 0)
    {
		t = b;
		b = a % b;
		a = t;
	}
    return a;
}
int main ()
{
int a = 14, b = 21;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod (a, b));
	return 0; 
}

