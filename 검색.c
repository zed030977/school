#include <stdio.h>
#include <stdlib.h>

int line_search(int a[], int n, int ky);

int main()
{
	int index, key, i, n, num;
	int x;
	
	printf("선형 검색 (보초법)"\n);
	printf("요소 개수: ");
	
	scanf("%d" &n);
	
	x = calloc(n, sizeof(int));
	for(i = 0; i <= n; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &key);
	
	index = line_search(x, num, key);
	
	
}

int line_search(int a[], int n, int ky)
{
	int i = 0;
	
	
}


