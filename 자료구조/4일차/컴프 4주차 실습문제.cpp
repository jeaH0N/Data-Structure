#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
#define MAX_STUDENT 3


//함수사용 국영수 평균구하기 
float average(float kor, float eng, float math, int i)
{
	float sum=0;
	float ave=0;
	ave = (kor + eng + math) / 3;
	printf("평균 : %lf\n", ave);
}

float sum(float kor, float eng, float math, int i)
{
   float sum = 0;
   sum = kor + eng + math;
   printf("%d번째 학생 합산 : %0.3f\t", i, sum);

   return 0;
}

int main()
{
	float kor=0, eng=0, math=0;
	int i;
	for (i = 1;  i <= 3; i++)
	{
		printf("국어, 영어 , 수학 과목을 입력해주세요.:\n ");
	    scanf("%f%f%f",&kor,&eng,&math);
	    sum(kor,eng,math,i);
	    average(kor,eng,math,i);
	}
	return 0;
}





// 7% 복리 계산 
/*int main(void){
	double total, rate,investment; //(총금, 이율, 원금)
	int year, n; //(돈을 맡긴 기간, 출력 년도)
	n = 1;
	printf("원금을 입력 하시오");
	scanf("%lf", &investment);
	printf("기간(년)을 입력하시오");
	scanf("%d", &year);
	total = investment;
	rate = 7 / 100.0; // 이율은 7% 
	printf("연도 원리금\n");
	while(year>0)
	{
		total = total *(1+rate);
		printf("%d %.3lf 원\n",n, total);
		year--;
		n++;
	}
	return 0;
}*/
//구조체를 이용한 이름,학번,학과 출력

/*	struct Student
	{
		char name[10];
		int num;
		char number[10];
	};
	
int main(void)
{	
	struct Student yang;
	strcpy(yang.name,"양재훈");
	yang.num=1971049;
	strcpy(yang.number,"IT융합학부");
	
	printf("이름:%s\n학번:%d\n전공:%s\n",yang.name,yang.num,yang.number); 
	
	return 0;
} */


//재귀호출을 이용한 10진수 에서 2진수(완성) 
/*void to_binary(int n)
{
    if (n == 0 || n == 1)
        printf("%d ", n);

    else {
        to_binary(n / 8);
        printf("%d ", n % 8);
    }
}

int main(void)
{
    int num;
    scanf("%d", &num);

    to_binary(num);
}*/

//영어 이름을 대문자에서 소문자로 출력 
/*void change_A()
{
    char str[1000];
    fgets(str,1000,stdin);
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a'&&str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A'&&str[i]<= 'Z')
        {
            str[i] += 32;
        }
    }
    printf("%s", str);
}
int main()
{
    change_A();
}*/
	
    

/*int main(void)(대문자 소문자로 (미완성) 
{
	char str[512] = { 0 };
	int i = 0;
	
	printf("영어 문장을 입력하세요. ->\n");
	gets_s(str, sizeof(str));
	
	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] == tolower(str[i]))//소문자를
		{
			str[i] = toupper(str[I]);
		 } 
		else if (str[i] == toupper(str[I]))
		{
			str[i] = tolower(str[i]);
		}
	}
	
	printf("입력한 문자열 대/소문자 변환 ->\n");
	printf("%s\n", str);
	
	return 0;
 } */


//재귀호출을 이용한 10진수 에서 2진수(미완성) 

/*int main(void){
	int number;
	printf("10진수 정수 입력:");
	scanf("%d",&number);//10진수 정수 입력
	to_bin(number); //함수호출
	printf("\n");
	 
	return 0;
}

int to_bin(int n){//2진수 변환 함수

if (n == 0 || n == 1)//n의 값이 0또는 1이되면 n의 값을 출력
printf("%d",n);
else{
	to_bin(n/2);// 재귀함수 호출 -n을 2로 나눈 값을 매용게변수로 사용 
	printf("%d",n % 2); //n을 2로 나눈 나머지 출력 
	
} 
return 0; 
}*/

//자연수 1부터 100까지 합 (do~while)문 
/*int main()
{
    int sum = 0;
    int n = 1;
    do {
        sum = sum + n;
        n = n + 1;
    } while (n <= 100);
    printf("자연수 1부터 100까지의 합 = %d", sum);
    
    return 0;
}*/


//1000만원 3년치 7퍼센트 이율 
/*int main(void)

{

double total, rate, investment;  //(총금, 이율, 원금)

int year, n;    //(돈 맡기는 기간, 출력 년도)

n =1;

printf("원금을 입력하세요");

scanf("%lf", &investment);

printf("이율을 입력하세요");

scanf("%lf", &rate);

printf("기간(년)을 입력하세요");

scanf("%d", &year);

total = investment;

rate = rate / 100.0; 

printf("연도   원리금\n");

while(year>0)

{

total = total *(1+rate);

printf("%d   %lf\n",n, total);

year--;

n++;

}

return 0;

}*/

/*int hanoi(int ring, char a, char b, char c)
{
   if (ring == 1)
      printf("원판 한개를 %c에서 %c로 이동\n", a, c);
   else
   {
      hanoi(ring - 1, a, c, b);
      printf("원판 %d을 %c에서 %c로 이동\n", ring, a, c);
      hanoi(ring - 1, b, a, c);
   }

   return 0;
}
int main()
{
   int ring;
   printf("하노이탑의 층수는?");
   scanf("%d", &ring);
   hanoi(ring, 'A', 'B', 'C');

}*/
