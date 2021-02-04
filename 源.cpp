#include<stdio.h>
int main()
{
	int i, num;

	printf("请输入一个数：\n");
	scanf_s("%d", &num);
	for (i = 2; i < num/2; i++)
	{
		if (num % i == 0)//被2至num-1中的一个数整除了，说明除1和自身外还有其他因子
		{
			printf("%d不是素数", num);
		}
		else
		{
			printf("%d是素数", num);
		}
		return 0;
	}



}