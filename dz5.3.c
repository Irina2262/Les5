#include <stdio.h>

int is_happy_number(int n)
{
int sum = 0, mu1 = 1;
    while (n > 0)
    {
		sum += n % 10;
		mu1 *= n % 10;
	}
	return (sum == mu1);
}
int main()
{
int n = 528;
    scanf("%d", &n);
    
    is_happy_number(n) ? printf("YES") : printf("NO");
    
	return 0;
}

