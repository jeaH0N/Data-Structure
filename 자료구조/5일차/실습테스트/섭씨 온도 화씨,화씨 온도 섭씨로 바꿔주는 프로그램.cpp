#include <stdio.h>

 //섭씨 온도를 화씨 온도로 변환해주는 함수 
/*	double F(double c){
	double f;
	
	f = 1.8 * c + 32;
	
	return f;	
	}
//화씨 온도를 섭씨 온도로 변환해주는 함수	 
	double C(double f){
	double c;
	
	c = (f-32)/1.8;
	
	return c;
	}
	
int main(void){
	int choice;
	double input;
	
	printf("섭씨입력1,화씨입력2");
	scanf("%d",&choice);
	printf("\n");
	
	if(choice == 1){
		printf("섭씨 입력:");
		scanf("%lf",&input);
		printf("변환된 화씨 :%f",F(input));
	}
	
	else if (choice == 2){
		printf("화씨 입력:");
		scanf("%lf",&input);
		printf("변환된 섭씨 :%f",C(input));
	}
	return 0;
}*/

//화씨 온도를 섭씨온도로 변환
	double C(double f){
	double c;
	c = (f-32)/1.8;
	return c;
	}
	
	int main(void)
	{
		double input;
		printf("화씨온도를 입력해주세요:");
		scanf("%lf",&input);
		printf("변환된 섭씨온도 : %lf",C(input));
	return 0;
	} 
