#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARINGS
#include <windows.h>


struct HealthMtg //헬스 관리 구조체
{
	char name[10];
	int age[10];
	int time[10];
	double number[10];//회원 번호 
};


void menu();
void inputFunc(struct HealthMtg* num);
void outputFunc(struct HealthMtg* num);

int main()
{
	struct HealthMtg num[10];
	int Healthnum,i,j;
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			num[i].number[j] = -1;
			num[i].age[j] = -1;
			num[i].time[j] = -1;//초기화 
		}
	}
	
	while(1)
	{
		system("cls");
		menu();
		printf("->"); 
		scanf("%d", &Healthnum);
		fflush(stdin);
		system("cls");
		
		switch(Healthnum){
			case 1:
			{
				inputFunc(num);
				break;
			}
			case 2:
			{
			 	outputFunc(num);
		    	break;
			}
			case 0:
			{
				printf("종료 하겠습니다.");
				return 0;
			}
			defult:
			{
				break;
			}
		}
		system("pause");
    }
    return 0;
}

void menu()
{
		printf("--------------------------------------------\n");
		printf("      헬스장 회원 관리 프로그램       \n");
		printf("         1. 신규 정보 등록            \n");
		printf("         2. 회원 정보 출력            \n");
		printf("         3. 회원 정보 삭제            \n");
		printf("         4. 회원 정보 수정            \n");
		printf("         5. 회원 정보 검색            \n");
		printf("         6. 회원 정보 정렬            \n");
		printf("         7. 파일 입력                 \n");
	    printf("         8. 파일 출력                 \n");
		printf("         0. 종료                      \n");
		printf("-------------------------------------------\n");
}
	
void inputFunc(struct HealthMtg* num)
{
	int i;
	printf("정보를 입력하세요\n");
		for(i=0;i<10;i++)
 	{
		if((*(num+i)).number[0] == -1)
  		{
  	 	break;
  		}
	}
printf("이름 : ");  scanf("%s",(*(num+i)).name);
fflush(stdin);
printf("회원 번호 : "); scanf("%s",(*(num+i)).number);
fflush(stdin);
printf("나이 : ");  scanf("%d",(*(num+i)).age);
printf("등록 시간 : "); scanf("%d",(*(num+i)).time);
fflush(stdin);
}

void outputFunc(struct HealthMtg* num)
{
 	int i;
 	printf("정보를 출력합니다\n");
 	printf(" %8s     | %5s     | %5s     | %5s     |\n","이름","회원 번호","나이","등록 시간");
 	
 	for(i=0;i<10;i++)
	{
		if((*(num+i)).number[0] != -1)
		{
   		printf(" %8s     | %5f     | %5d     | %5d 개월    |\n",(*(num+i)).name,(*(num+i)).number[1], (*(num+i)).age[0],(*(num+i)).time[0]); 
		}
	}
}


	


