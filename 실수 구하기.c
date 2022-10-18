#include <stdio.h>

int main()
{
	int i, j, n;
	int ct;
		
	for(i = 1; i <= 1000; i++)
	{
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
			if(i == j)
			{
				printf("%d ", i);
			 	ct++;
			}
	}		
	printf("실수 개수: %d",ct);
}
