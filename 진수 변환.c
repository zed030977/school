#include <stdio.h>

void ess_con(int a, int b);


int main()
{
	int value = 0;
	int essence = 0;
	int num;
	
	do
	{
		printf("���� �ϳ��� �Է� �Ͻÿ�: ");
		scanf("%d", &value);
	}while(value <= 0);
	
	do
	{
		printf("\n��ȯ�� ���� ���Ͻÿ�.(10���� ������ ����): ");
		scanf("%d", &essence);
	}while(essence >= 36);
	
	
	ess_con(value, essence);
	
	
	//printf("��ȯ�� ������ %d �Դϴ�.", num);
	 
	return 0;
}

void ess_con(int a, int b)
{
	int inputNum = a;
	int count = 0, j, k;
	
	if(a == 0)
	{
		return;
	}
	
	while(inputNum > 0)
	{
		inputNum = inputNum / b;
		count++;
	}
	
	int fl[count];
	for(j = count-1; a >0; j--) 
	{
		fl[j] = a%b;
		a /= b;
	}
	for(k = 0; k < count; k++)
	{
		printf(" %d", fl[k]);
	}
	
	
}
