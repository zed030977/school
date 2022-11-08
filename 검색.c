#include <stdio.h>
#include <stdlib.h>

int line_search(int a[], int n, int ky);

int main(void)
{
	int index, key, i, n;
	int *x;
	
	puts("선형 검색 (보초법)");
	printf("요소 개수: ");
	
	scanf("%d", &n);
	
	x = calloc(n + 1, sizeof(int));
	for(i = 0; i < n; i++)
	{
		printf("x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	printf("검색값: ");
	scanf("%d", &key);
	
	index = line_search(x, n, key);
	if(index == -1)
		printf("검색에 실패했습니다.");
	else
		printf("%d은(는) x[%d]에 있습니다.\n", key, index);
	free(x);
	
	return 0; 
	
}

int line_search(int a[], int n, int ky)
{
	int i = 0;
	a[n] = ky;
	while(1) {
		if(a[i] == ky)
		{
			break;
		}
		i++;
	}
	return i == n ? -1 : i;
	
}
