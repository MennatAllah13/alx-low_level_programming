#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char : ", sizeof(char), " byte(s)");
	printf("Size of int : ", sizeof(int), " bytes(s)");
	printf("Size of long int : ", sizeof(long int), " byte(s)");
	printf("Size of long long int : ", sizeof(long long int), " byte(s)");
	printf("Size of float : ", sizeof(float), " byte(s)");
	return (0);
}
