#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int n[100];
int c[100];
void check()
{
	int j = 0;
	for (int i = 0; i <= 100; i++)
	{
		c[i] = n[i];
	}
	while (j <= 100)
	{
		if (c[j] < 1000)
		{
			c[j]++;
		}
		else
		{
			printf("\tHighest number is %d \n", n[j]);
			break;
		}
		j++;
		if (j == 101)
		{
			j = 0;
		}
	}

}
int main()
{
	printf("Enter number : ");
	scanf("%d", &n[0]);
	printf("\nEnter number : ");
	scanf("%d", &n[1]);
	printf("\nEnter number : ");
	scanf("%d", &n[2]);
	printf("\nEnter number : ");
	scanf("%d", &n[3]);
	printf("\nEnter number : ");
	scanf("%d", &n[4]);
	printf("\n--------------------------------\n\n");
	check();
	return 0;
}