#include <stdio.h>
#include <string.h>
#define SIZE 3
//�̸� �й� �а����� �迭�� �ʱ�ȭ�Ͽ� ��� 
struct Student
{
	char studenttId[10];
	char name[10];
	char magor[100];
};

int main(void)
{
	struct Student s = {"1971049","������","IT�����к�"};
	
	printf("�й�:%s\n",s.studenttId);
	
	printf("�̸� :%s\n",s.name);
	
	printf("�а� :%s\n",s.magor);
	
	return 0;
}

//�̸� �й� �а����� �迭�� �ʱ�ȭ�Ͽ� ���3���̻� 
/*struct Student
{
    char studentId[10];
    char name[10];
    char magor[100];
}list[SIZE];
 
 
 int main(void)
 {
     struct Student list[SIZE];
     int i;

     for( i = 0; i<SIZE; i++)
     {
         printf("�й��� �Է��Ͻÿ�:");
         scanf("%s",&list[i].studentId);
         printf("�̸��� �Է��Ͻÿ�:");
         scanf("%s",&list[i].name);
         printf("�а����� �Է��Ͻÿ�:");
         scanf("%s",&list[i].magor);
         printf("\n");
     }
     
     printf("\n");
     
     for(i=0; i<SIZE; i++)
     {
     printf("�й�:%s, �̸�:%s, �а���:%s\n",list[i].studentId,list[i].name,list[i].magor);
     }return 0;
}*/
