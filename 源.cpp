#include<stdio.h>
int main()
{
	int i, num;

	printf("������һ������\n");
	scanf_s("%d", &num);
	for (i = 2; i < num/2; i++)
	{
		if (num % i == 0)//��2��num-1�е�һ���������ˣ�˵����1�������⻹����������
		{
			printf("%d��������", num);
		}
		else
		{
			printf("%d������", num);
		}
		return 0;
	}



}