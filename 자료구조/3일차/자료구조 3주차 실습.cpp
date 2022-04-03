#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include<string.h>

//자신 이름 n번출력 
//int main(void)
//{
//	int i = 0,j = 0;
//	char name[20];
//	printf("자신의 이름을 입력하시오 :");
//	scanf("%s",name);
	
//	printf("몇회 출력할까요?");
//	scanf("%d", &j);
	
//	while(i < j)
//	{
//		printf("%3d. %8s\n",i+1,name);
//		i++;
//	}
//	return 0;
//}

//10진수와 2진수 변환 
//int main(void)
//{
//    int n, c = 0, mok, nmg, i;
//    int arr[10];

//    printf("정수 입력 : ");
//    scanf("%d", &n);

//    do
//   {
//        mok = n / 2;
//        nmg = n - mok * 2;
//        arr[c++] = nmg;
//        n = mok;
//    } while (mok != 0);

//    for (i = c - 1; i >= 0; i--)
//    printf("%d", arr[i]);

//    return 0;
//}
 
//10진수에서 2,8,16진수로 변환하는 프로그램 
//int main(void)
//{
//    char arr[10];
//    int n;

//    printf("정수 입력 : ");
//    scanf("%d", &n);

//    printf("10진수 %d를 2진수로 변환 : %s\n", n, itoa(n, arr, 2));//2진수 
//    printf("10진수 %d를 8진수로 변환 : %s\n", n, itoa(n, arr, 8));//8진수 
//    printf("10진수 %d를 16진수로 변환 : %s\n", n, itoa(n, arr, 16));//16진수 

//    return 0;
//}

//국어,영어,수학 합산과 평균 
//int main(void)
//{
   //선언문 
//   int kor, eng, math;   // 입력받을 변수는 초기화를 시켜주지 않아도 괜찮다.
//   int sum = 0;
//   double avg = 0.0;

   //입력문 
//   printf("국어 : ");
//   scanf("%d", &kor);

//   printf("영어 : ");
//   scanf("%d", &eng);

//   printf("수학 : ");
//   scanf("%d", &math);

   //처리문 
//   sum = kor + eng + math;
//   avg = sum / 3.;   // == avg = (double)sum / 3;

   //출력문 
//   printf("총점 : %d\n", sum);
//   printf("평균 : %.2lf\n", avg);

//   return 0;
//}

//1부터 100까지 3의배수 합하기 
//int main(void) 
//{

//	int i, sum;

//	i = 1;

//	sum = 0;

//	while(i<=100) {

//		if( (i%3)==0 )

//		sum += i;

//		i++;

//	}

//	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다. \n", sum);

//	return 0;

//}

//1부터 100까지 3의 배수합하기 (2) 
//int main(void)
//{
//int x, sum;
//x =1;
//sum = 0;
//while(x<=100)
//{
//if(x%3==0)
//{sum = sum +x;}
//x++;
//}
//printf("1부터 100사이의 모든 3의배수의 합은 %d입니다.\n", sum);
//return 0;
//}

//int main()
//{

//   char str[100];
//   int len = 0;

//   printf("입력 : ");
//   scanf("%s", str);    // 공백을 포함하지 않은 입력을 받을때  scanf(), 공백을 포함한 입력을 받을 때 gets()

//   len = strlen(str);   // str에 저장된 문자열의 길이를 len에 저장한다.(NULL 제외)

//   printf("출력 : ");
//   for(int i = len - 1; i >= 0; --i)
//   {   // for문의 초기값을 len으로 주어 뒤에서 부터 문자열을 출력한다.
//      printf("%c", str[i]);
//   }
//   printf("\n");

//   return 0;
//}


//1부터 100까지 합하기 (while) 구문 사용하기 
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
	
	
//	while( i <= 100)
//	 {
//	 	sum += i;
//		i++;
//	}
//	printf("최종값은 : %d",sum);
//	return 0;
// }

