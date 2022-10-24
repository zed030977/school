#include <stdio.h>

void ess_con(int a, int b);


int main()
{
	int value = 0;
	int essence = 0;
	int num;
	
	do
	{
		printf("정수 하나를 입력 하시오: ");
		scanf("%d", &value);
	}while(value <= 0);
	
	do
	{
		printf("\n변환할 진를 구하시오.(36진수 까지만 가능): ");
		scanf("%d", &essence);
	}while(essence >= 37);
	
	
	ess_con(value, essence);
	
	
	//printf("변환된 진수는 %d 입니다.", num);
	 
	return 0;
}

void ess_con(int a, int b)
{
	int inputNum = a;
	int count = 0, j, k;
		
	while(inputNum > 0)
	{
		inputNum = inputNum / b;
		count++;
	}
	
	char dchar[] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int fl[count];
	for(j = count-1; a >0; j--) 
	{
		fl[j] = a%b; //1 
		a /= b;
	}
	for(k = 0; k < count; k++)
	{
		printf("%c ", dchar[fl[k]]);
	}
	
	
}
