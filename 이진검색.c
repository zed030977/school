#include <stdio.h>
#include <stdlib.h>

int second_echelon_search(const int a[], int n, int key);


int main()
{
	int i, nx, ky, idx;
	int *x;
	printf("이진 검색\n");
	printf("요소 개수:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("오른차순으로 입력하세요.\n");
	printf("x[0] :");
	scanf("%d", &x[0]);
	for(i = 1; i < nx; i++)
	{
		do{
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		}while(x[i] < x[i - 1]);
	}
	printf("검색값: ");
	scanf("%d", &ky);
	idx =  second_echelon_search(x, nx, ky);
	if(idx == -1)
	{
		printf("검색에 실패했습니다.\n");
	}
	else
	{
		printf("%d는 x[%d]에 있습니다.\n", ky, idx);
	}
	free(x);
	
	return 0;
}

int second_echelon_search(const int a[], int n, int key)
{
	int indexl = 0;
	int indexr = n - 1;
	int indexc;
	
	do
	{
		indexc = (indexl + indexr) / 2;
		if(a[indexc] == key)
		{
			return indexc;
		}
		else if(a[indexc] < key)
		{
			indexl = indexc + 1;
		}
		else
		{
			indexr = indexc -1;
		}
	} while(indexl <= indexr);
	return -1;

}
