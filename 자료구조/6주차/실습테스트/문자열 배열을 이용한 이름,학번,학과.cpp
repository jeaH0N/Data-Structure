#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
#define MAX_STUDENT 3

//���ڿ� �迭�� �̿��� �̸�,�ּ�,�а� ���

	struct Student
	{
		char name[10];
		char Address[100];
		char number[10];
	};
	
int main(void)
{	
	struct Student yang;
	strcpy(yang.name,"������");
	strcpy(yang.Address,"��⵵ ���ý� ���굿 729-7");
	strcpy(yang.number,"IT�����к�");
	
	printf("�̸�:%s\n�ּ�:%s\n����:%s\n",yang.name,yang.Address,yang.number); 
	
	return 0;
}
