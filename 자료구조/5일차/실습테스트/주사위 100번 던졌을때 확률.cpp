#include <stdio.h>
#include <stdlib.h> //rand()�Լ��� ����ϱ����� 
#include <time.h> //srand(time(NULL))�� ����ϱ� ����

int main(void)
{
	float dice[7] = {0 ,};
	
	int x;
	int num; //1~6�� ����
	
	srand(time(NULL));
	
	for(x = 1; x<= 100; x++)
	{
		num = 1 + (rand() % 6);
		dice[num]++;
	 } 
	for(x=1; x<=6; x++)
	{
		printf("100�� �� �ֻ��� %d�� ���� Ƚ��: %d\n", x, (int)dice[x]);
		printf("100�� �� �ֻ��� %d�� ���� Ȯ��: %f\n", x, dice[x]/100);
		printf("----------------------------------------------\n"); 
	}
	return 0;
 }
 
