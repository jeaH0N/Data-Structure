#include <stdio.h>

//학점 계산기 
int main(void){
	int score;
	
	printf("당신의 점수는 몇점입니까?:");
	
	scanf("%d", &score);
	
	switch (score/10*10)
	{
	case 100 :
	case 90 :
		printf("A학점입니다.\n");
		break;
	case 80 :
		printf("B학점입니다.\n");
		break;
	case 70 :
		printf("C학점입니다.\n");
		break;
	case 60 :
		printf("D학점입니다.\n");
		break;
	default :
		printf("F학점입니다.\n"); 
	}
	return 0;
}
