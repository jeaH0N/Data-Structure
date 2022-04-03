#include <stdio.h>
#include <stdlib.h> //rand()함수를 사용하기위해 
#include <time.h> //srand(time(NULL))을 사용하기 위해

int main(void)
{
	float dice[7] = {0 ,};
	
	int x;
	int num; //1~6의 숫자
	
	srand(time(NULL));
	
	for(x = 1; x<= 100; x++)
	{
		num = 1 + (rand() % 6);
		dice[num]++;
	 } 
	for(x=1; x<=6; x++)
	{
		printf("100번 중 주사위 %d가 나온 횟수: %d\n", x, (int)dice[x]);
		printf("100번 중 주사위 %d가 나온 확률: %f\n", x, dice[x]/100);
		printf("----------------------------------------------\n"); 
	}
	return 0;
 }
 
