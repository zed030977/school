#include <stdio.h>
#include <stdlib.h>

int second_echelon_search(const int a[], int n, int key);


int main()
{
	int i, nx, ky, idx;
	int *x;
	printf("���� �˻�\n");
	printf("��� ����:");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0] :");
	scanf("%d", &x[0]);
	for(i = 1; i < nx; i++)
	{
		do{
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		}while(x[i] < x[i - 1]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	idx =  second_echelon_search(x, nx, ky);
	if(idx == -1)
	{
		printf("�˻��� �����߽��ϴ�.\n");
	}
	else
	{
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
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
