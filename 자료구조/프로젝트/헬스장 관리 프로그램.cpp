#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARINGS
#include <windows.h>


struct HealthMtg //�ｺ ���� ����ü
{
	char name[10];
	int age[10];
	int time[10];
	double number[10];//ȸ�� ��ȣ 
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
			num[i].time[j] = -1;//�ʱ�ȭ 
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
				printf("���� �ϰڽ��ϴ�.");
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
		printf("      �ｺ�� ȸ�� ���� ���α׷�       \n");
		printf("         1. �ű� ���� ���            \n");
		printf("         2. ȸ�� ���� ���            \n");
		printf("         3. ȸ�� ���� ����            \n");
		printf("         4. ȸ�� ���� ����            \n");
		printf("         5. ȸ�� ���� �˻�            \n");
		printf("         6. ȸ�� ���� ����            \n");
		printf("         7. ���� �Է�                 \n");
	    printf("         8. ���� ���                 \n");
		printf("         0. ����                      \n");
		printf("-------------------------------------------\n");
}
	
void inputFunc(struct HealthMtg* num)
{
	int i;
	printf("������ �Է��ϼ���\n");
		for(i=0;i<10;i++)
 	{
		if((*(num+i)).number[0] == -1)
  		{
  	 	break;
  		}
	}
printf("�̸� : ");  scanf("%s",(*(num+i)).name);
fflush(stdin);
printf("ȸ�� ��ȣ : "); scanf("%s",(*(num+i)).number);
fflush(stdin);
printf("���� : ");  scanf("%d",(*(num+i)).age);
printf("��� �ð� : "); scanf("%d",(*(num+i)).time);
fflush(stdin);
}

void outputFunc(struct HealthMtg* num)
{
 	int i;
 	printf("������ ����մϴ�\n");
 	printf(" %8s     | %5s     | %5s     | %5s     |\n","�̸�","ȸ�� ��ȣ","����","��� �ð�");
 	
 	for(i=0;i<10;i++)
	{
		if((*(num+i)).number[0] != -1)
		{
   		printf(" %8s     | %5f     | %5d     | %5d ����    |\n",(*(num+i)).name,(*(num+i)).number[1], (*(num+i)).age[0],(*(num+i)).time[0]); 
		}
	}
}


	


