#include <stdio>


int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (Unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", (Unsigned long)sizeof(a));
	printf("Size of long int %lu byte(s)\n",(Unsigned long)sizeof(b));
	printf("Size of long long int %lu bytes(s)\n", (Unsigned long)sizeof(c));
	printf("Size of float %lu byte(s)\n", (Unsigned long)sizeof(f));
	return (0);
}
