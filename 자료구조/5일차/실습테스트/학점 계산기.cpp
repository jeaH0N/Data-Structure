#include <stdio.h>

//���� ���� 
int main(void){
	int score;
	
	printf("����� ������ �����Դϱ�?:");
	
	scanf("%d", &score);
	
	switch (score/10*10)
	{
	case 100 :
	case 90 :
		printf("A�����Դϴ�.\n");
		break;
	case 80 :
		printf("B�����Դϴ�.\n");
		break;
	case 70 :
		printf("C�����Դϴ�.\n");
		break;
	case 60 :
		printf("D�����Դϴ�.\n");
		break;
	default :
		printf("F�����Դϴ�.\n"); 
	}
	return 0;
}
