#include <stdio.h>
#include <string.h>
#define SIZE 3
//이름 학번 학과명을 배열로 초기화하여 출력 
struct Student
{
	char studenttId[10];
	char name[10];
	char magor[100];
};

int main(void)
{
	struct Student s = {"1971049","양재훈","IT융합학부"};
	
	printf("학번:%s\n",s.studenttId);
	
	printf("이름 :%s\n",s.name);
	
	printf("학과 :%s\n",s.magor);
	
	return 0;
}

//이름 학번 학과명을 배열로 초기화하여 출력3인이상 
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
         printf("학번을 입력하시오:");
         scanf("%s",&list[i].studentId);
         printf("이름을 입력하시오:");
         scanf("%s",&list[i].name);
         printf("학과명을 입력하시오:");
         scanf("%s",&list[i].magor);
         printf("\n");
     }
     
     printf("\n");
     
     for(i=0; i<SIZE; i++)
     {
     printf("학번:%s, 이름:%s, 학과명:%s\n",list[i].studentId,list[i].name,list[i].magor);
     }return 0;
}*/
