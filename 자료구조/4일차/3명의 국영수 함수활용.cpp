#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
#define MAX_STUDENT 3


int sum(int a, int b, int c){
   int sum;
   sum = a + b+ c;
   //printf("%d \n", sum);
   return sum;
}
float avg(int sum){
   float avg;
   avg = (float)sum/3;
   //printf("%f \n", avg);
   return avg;
}
int main()
{
   int akor, aeng, amath;
   int bkor, beng, bmath;
   int ckor, ceng, cmath;
   char input;
   printf("a의 국어, 영어, 수학 점수를 입력해주세요\n");
   scanf("%d %d %d", &akor, &aeng, &amath);
   printf("b의 국어, 영어, 수학 점수를 입력해주세요\n");
   scanf("%d %d %d", &bkor, &beng, &bmath);
   printf("c의 국어, 영어, 수학 점수를 입력해주세요\n");
   scanf("%d %d %d", &ckor, &ceng, &cmath);
   
   int total;
   float average;   

   total = sum(akor, aeng, amath);
   average = avg(total);
   printf("a의 국어, 영어, 수학 점수의 총합과 평균 점수: %d, %.2f 입니다\n", total, average);
   
   total = sum(bkor, beng, bmath);
   average = avg(total);
   printf("b의 국어, 영어, 수학 점수의 총합과 평균 점수: %d, %.2f 입니다\n", total, average);

   total = sum(ckor, ceng, cmath);
   average = avg(total);
   printf("c의 국어, 영어, 수학 점수의 총합과 평균 점수: %d, %.2f 입니다\n", total, average);
   
   total = sum(akor, bkor, ckor);
   average = avg(total);
   printf("국어 점수의 총합과 평균 점수: %d, %.1f 입니다\n", total, average);
   
      total = sum(aeng, beng, ceng);
   average = avg(total);
   printf("영어 점수의 총합과 평균 점수: %d, %.1f 입니다\n", total, average);
   
      total = sum(amath, bmath, cmath);
   average = avg(total);
   printf("수학 점수의 총합과 평균 점수: %d, %.1f 입니다\n", total, average);
   
   printf("총학생의 평균 : %.2lf\n\n", (double)total / 3);

   return 0; 

}
