#include <stdio.h>

 //���� �µ��� ȭ�� �µ��� ��ȯ���ִ� �Լ� 
/*	double F(double c){
	double f;
	
	f = 1.8 * c + 32;
	
	return f;	
	}
//ȭ�� �µ��� ���� �µ��� ��ȯ���ִ� �Լ�	 
	double C(double f){
	double c;
	
	c = (f-32)/1.8;
	
	return c;
	}
	
int main(void){
	int choice;
	double input;
	
	printf("�����Է�1,ȭ���Է�2");
	scanf("%d",&choice);
	printf("\n");
	
	if(choice == 1){
		printf("���� �Է�:");
		scanf("%lf",&input);
		printf("��ȯ�� ȭ�� :%f",F(input));
	}
	
	else if (choice == 2){
		printf("ȭ�� �Է�:");
		scanf("%lf",&input);
		printf("��ȯ�� ���� :%f",C(input));
	}
	return 0;
}*/

//ȭ�� �µ��� �����µ��� ��ȯ
	double C(double f){
	double c;
	c = (f-32)/1.8;
	return c;
	}
	
	int main(void)
	{
		double input;
		printf("ȭ���µ��� �Է����ּ���:");
		scanf("%lf",&input);
		printf("��ȯ�� �����µ� : %lf",C(input));
	return 0;
	} 
