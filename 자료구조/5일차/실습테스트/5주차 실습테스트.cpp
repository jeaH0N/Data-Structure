#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//배열을 이용하여 3명의국영수 입력받아 합산과 평균구하기 
/*int main()
{
	int var2, var3, var4;
	int stdno[3], kor[3], eng[3], math[3];
	int tot[3];
	float avg[3];
	int i,j;
	
	printf(" 국어 영어 수학 점수를 순서대로 입력하세요\n");
	for(i=0;i<3;i++){
		scanf("%d %d %d", &var2, &var3, &var4);
		kor[i] = var2;
		eng[i] = var3;
		math[i] = var4;
		tot[i] = var2+var3+var4;
		avg[i] = (var2+var3+var4)/3.0;	
	}
	
	
	printf("\n국어\t영어\t수학\t총점\t평균\n");
	for(i=0;i<3;i++)
	{
		printf("%3d\t%3d\t%3d\t%3d\t%.3f\t%\n", kor[i], eng[i], math[i], tot[i], avg[i]);
	}
	return 0;
}*/

//원화 계산 프로그램

/*int main(void)

{

	float rate;   // 원/달러 환율
    float usd;   // 달러화
	int krw;   // 원화

	printf("달러에 대한 원화 환율을 입력하시오: ");   // 입력안내 메세지
	scanf("%f", &rate);    // 사용자로부터 환율 입력

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);     

	usd = krw / rate;      // 달러화로 환산

	printf("원화 %d원은 %f달러입니다.\n", krw, usd);
	return 0;

}*/

//빗변 구하는 프로그램
/*double C(double a, double b)
{
	return a*a+b*b;
 } 

double tri(double a, double b); 


int main(void)
{
	double a,b;
	printf("직각삼각형에서 a,b변을 입력받아 빗변c를 구하는 프로그램\n\n");
	printf("변 a를 입력하시오:");
	scanf("%lf",&a);
	printf("변 b를 입력하시오:");
	scanf("%lf",&b);
	printf("\n 두변의 %lf,%lf를 이용하여 구한 빗변 c는 %lf입니다.\n",a, b, sqrt(C(a,b)));
	
	return 0; 
}*/

//for문으로 1부터 10까지 짝수만 더하기
/*int main(void)
{
	int a;
	int sum = 0;
	for(a=1;a<11;a++)
	{
		if(a%2 == 0)
		{
			sum += a;
		}
	}
	printf("1~10까지 짝수 값의 합계는?%d\n", sum);
 } */
