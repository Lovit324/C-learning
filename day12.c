//÷∏’Î¡∑œ∞
#include<stdio.h>
#define length 10
int a[length];
int* p = a;
int ARR1(int* p, int	LENGTH	)
{
	for (size_t i = 0; i < LENGTH; i++)
	{
		*p++ = i;
	}
}

int ARR2(int* p, int	LENGTH)
{
	for (size_t i = 0; i < LENGTH; i+=2)
	{
		*p  = i;
		p += 2;
	}
}

int ARR3(int* p, int	LENGTH)
{	
	*p++ = 0;
	for (size_t i = 1; i < LENGTH; i += 2)
	{
		*p = i;
		p += 2;
	}
}



int main(void)
{
	for (size_t i = 0; i < length; i++)
	{
		a[i] = 0;
		printf("%d\t", a[i]);
	}

	ARR1(p, length);
	printf("\n");
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\t", a[i]);
	}
	
	printf("\n");

	for (size_t i = 0; i < length; i++)
	{
		a[i] = 0;
		printf("%d\t", a[i]);
	}

	ARR2(p, length);
	printf("\n");
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\t", a[i]);
	}

	printf("\n");

	for (size_t i = 0; i < length; i++)
	{
		a[i] = 0;
		printf("%d\t", a[i]);
	}

	ARR3(p, length);
	printf("\n");
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\t", a[i]);
	}

}