#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
#define MAX_STUDENT 3


//�Լ���� ������ ��ձ��ϱ� 
float average(float kor, float eng, float math, int i)
{
	float sum=0;
	float ave=0;
	ave = (kor + eng + math) / 3;
	printf("��� : %lf\n", ave);
}

float sum(float kor, float eng, float math, int i)
{
   float sum = 0;
   sum = kor + eng + math;
   printf("%d��° �л� �ջ� : %0.3f\t", i, sum);

   return 0;
}

int main()
{
	float kor=0, eng=0, math=0;
	int i;
	for (i = 1;  i <= 3; i++)
	{
		printf("����, ���� , ���� ������ �Է����ּ���.:\n ");
	    scanf("%f%f%f",&kor,&eng,&math);
	    sum(kor,eng,math,i);
	    average(kor,eng,math,i);
	}
	return 0;
}





// 7% ���� ��� 
/*int main(void){
	double total, rate,investment; //(�ѱ�, ����, ����)
	int year, n; //(���� �ñ� �Ⱓ, ��� �⵵)
	n = 1;
	printf("������ �Է� �Ͻÿ�");
	scanf("%lf", &investment);
	printf("�Ⱓ(��)�� �Է��Ͻÿ�");
	scanf("%d", &year);
	total = investment;
	rate = 7 / 100.0; // ������ 7% 
	printf("���� ������\n");
	while(year>0)
	{
		total = total *(1+rate);
		printf("%d %.3lf ��\n",n, total);
		year--;
		n++;
	}
	return 0;
}*/
//����ü�� �̿��� �̸�,�й�,�а� ���

/*	struct Student
	{
		char name[10];
		int num;
		char number[10];
	};
	
int main(void)
{	
	struct Student yang;
	strcpy(yang.name,"������");
	yang.num=1971049;
	strcpy(yang.number,"IT�����к�");
	
	printf("�̸�:%s\n�й�:%d\n����:%s\n",yang.name,yang.num,yang.number); 
	
	return 0;
} */


//���ȣ���� �̿��� 10���� ���� 2����(�ϼ�) 
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

//���� �̸��� �빮�ڿ��� �ҹ��ڷ� ��� 
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
	
    

/*int main(void)(�빮�� �ҹ��ڷ� (�̿ϼ�) 
{
	char str[512] = { 0 };
	int i = 0;
	
	printf("���� ������ �Է��ϼ���. ->\n");
	gets_s(str, sizeof(str));
	
	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] == tolower(str[i]))//�ҹ��ڸ�
		{
			str[i] = toupper(str[I]);
		 } 
		else if (str[i] == toupper(str[I]))
		{
			str[i] = tolower(str[i]);
		}
	}
	
	printf("�Է��� ���ڿ� ��/�ҹ��� ��ȯ ->\n");
	printf("%s\n", str);
	
	return 0;
 } */


//���ȣ���� �̿��� 10���� ���� 2����(�̿ϼ�) 

/*int main(void){
	int number;
	printf("10���� ���� �Է�:");
	scanf("%d",&number);//10���� ���� �Է�
	to_bin(number); //�Լ�ȣ��
	printf("\n");
	 
	return 0;
}

int to_bin(int n){//2���� ��ȯ �Լ�

if (n == 0 || n == 1)//n�� ���� 0�Ǵ� 1�̵Ǹ� n�� ���� ���
printf("%d",n);
else{
	to_bin(n/2);// ����Լ� ȣ�� -n�� 2�� ���� ���� �ſ�Ժ����� ��� 
	printf("%d",n % 2); //n�� 2�� ���� ������ ��� 
	
} 
return 0; 
}*/

//�ڿ��� 1���� 100���� �� (do~while)�� 
/*int main()
{
    int sum = 0;
    int n = 1;
    do {
        sum = sum + n;
        n = n + 1;
    } while (n <= 100);
    printf("�ڿ��� 1���� 100������ �� = %d", sum);
    
    return 0;
}*/


//1000���� 3��ġ 7�ۼ�Ʈ ���� 
/*int main(void)

{

double total, rate, investment;  //(�ѱ�, ����, ����)

int year, n;    //(�� �ñ�� �Ⱓ, ��� �⵵)

n =1;

printf("������ �Է��ϼ���");

scanf("%lf", &investment);

printf("������ �Է��ϼ���");

scanf("%lf", &rate);

printf("�Ⱓ(��)�� �Է��ϼ���");

scanf("%d", &year);

total = investment;

rate = rate / 100.0; 

printf("����   ������\n");

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
      printf("���� �Ѱ��� %c���� %c�� �̵�\n", a, c);
   else
   {
      hanoi(ring - 1, a, c, b);
      printf("���� %d�� %c���� %c�� �̵�\n", ring, a, c);
      hanoi(ring - 1, b, a, c);
   }

   return 0;
}
int main()
{
   int ring;
   printf("�ϳ���ž�� ������?");
   scanf("%d", &ring);
   hanoi(ring, 'A', 'B', 'C');

}*/
