#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
#define MAX_STUDENT 3

//문자열 배열을 이용한 이름,주소,학과 출력

	struct Student
	{
		char name[10];
		char Address[100];
		char number[10];
	};
	
int main(void)
{	
	struct Student yang;
	strcpy(yang.name,"양재훈");
	strcpy(yang.Address,"경기도 평택시 지산동 729-7");
	strcpy(yang.number,"IT융합학부");
	
	printf("이름:%s\n주소:%s\n전공:%s\n",yang.name,yang.Address,yang.number); 
	
	return 0;
}
