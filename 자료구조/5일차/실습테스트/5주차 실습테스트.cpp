#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//�迭�� �̿��Ͽ� 3���Ǳ����� �Է¹޾� �ջ�� ��ձ��ϱ� 
/*int main()
{
	int var2, var3, var4;
	int stdno[3], kor[3], eng[3], math[3];
	int tot[3];
	float avg[3];
	int i,j;
	
	printf(" ���� ���� ���� ������ ������� �Է��ϼ���\n");
	for(i=0;i<3;i++){
		scanf("%d %d %d", &var2, &var3, &var4);
		kor[i] = var2;
		eng[i] = var3;
		math[i] = var4;
		tot[i] = var2+var3+var4;
		avg[i] = (var2+var3+var4)/3.0;	
	}
	
	
	printf("\n����\t����\t����\t����\t���\n");
	for(i=0;i<3;i++)
	{
		printf("%3d\t%3d\t%3d\t%3d\t%.3f\t%\n", kor[i], eng[i], math[i], tot[i], avg[i]);
	}
	return 0;
}*/

//��ȭ ��� ���α׷�

/*int main(void)

{

	float rate;   // ��/�޷� ȯ��
    float usd;   // �޷�ȭ
	int krw;   // ��ȭ

	printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ�: ");   // �Է¾ȳ� �޼���
	scanf("%f", &rate);    // ����ڷκ��� ȯ�� �Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);     

	usd = krw / rate;      // �޷�ȭ�� ȯ��

	printf("��ȭ %d���� %f�޷��Դϴ�.\n", krw, usd);
	return 0;

}*/

//���� ���ϴ� ���α׷�
/*double C(double a, double b)
{
	return a*a+b*b;
 } 

double tri(double a, double b); 


int main(void)
{
	double a,b;
	printf("�����ﰢ������ a,b���� �Է¹޾� ����c�� ���ϴ� ���α׷�\n\n");
	printf("�� a�� �Է��Ͻÿ�:");
	scanf("%lf",&a);
	printf("�� b�� �Է��Ͻÿ�:");
	scanf("%lf",&b);
	printf("\n �κ��� %lf,%lf�� �̿��Ͽ� ���� ���� c�� %lf�Դϴ�.\n",a, b, sqrt(C(a,b)));
	
	return 0; 
}*/

//for������ 1���� 10���� ¦���� ���ϱ�
/*int main(void)
{
	int a;
	int sum = 0;
	for(a=1;a<11;a++)
	{
		if(a%2 == 0)
		{
			sum += a;
		}
	}
	printf("1~10���� ¦�� ���� �հ��?%d\n", sum);
 } */
