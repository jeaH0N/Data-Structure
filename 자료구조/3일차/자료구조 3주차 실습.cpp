#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#include<string.h>

//�ڽ� �̸� n����� 
//int main(void)
//{
//	int i = 0,j = 0;
//	char name[20];
//	printf("�ڽ��� �̸��� �Է��Ͻÿ� :");
//	scanf("%s",name);
	
//	printf("��ȸ ����ұ��?");
//	scanf("%d", &j);
	
//	while(i < j)
//	{
//		printf("%3d. %8s\n",i+1,name);
//		i++;
//	}
//	return 0;
//}

//10������ 2���� ��ȯ 
//int main(void)
//{
//    int n, c = 0, mok, nmg, i;
//    int arr[10];

//    printf("���� �Է� : ");
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
 
//10�������� 2,8,16������ ��ȯ�ϴ� ���α׷� 
//int main(void)
//{
//    char arr[10];
//    int n;

//    printf("���� �Է� : ");
//    scanf("%d", &n);

//    printf("10���� %d�� 2������ ��ȯ : %s\n", n, itoa(n, arr, 2));//2���� 
//    printf("10���� %d�� 8������ ��ȯ : %s\n", n, itoa(n, arr, 8));//8���� 
//    printf("10���� %d�� 16������ ��ȯ : %s\n", n, itoa(n, arr, 16));//16���� 

//    return 0;
//}

//����,����,���� �ջ�� ��� 
//int main(void)
//{
   //���� 
//   int kor, eng, math;   // �Է¹��� ������ �ʱ�ȭ�� �������� �ʾƵ� ������.
//   int sum = 0;
//   double avg = 0.0;

   //�Է¹� 
//   printf("���� : ");
//   scanf("%d", &kor);

//   printf("���� : ");
//   scanf("%d", &eng);

//   printf("���� : ");
//   scanf("%d", &math);

   //ó���� 
//   sum = kor + eng + math;
//   avg = sum / 3.;   // == avg = (double)sum / 3;

   //��¹� 
//   printf("���� : %d\n", sum);
//   printf("��� : %.2lf\n", avg);

//   return 0;
//}

//1���� 100���� 3�ǹ�� ���ϱ� 
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

//	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�. \n", sum);

//	return 0;

//}

//1���� 100���� 3�� ������ϱ� (2) 
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
//printf("1���� 100������ ��� 3�ǹ���� ���� %d�Դϴ�.\n", sum);
//return 0;
//}

//int main()
//{

//   char str[100];
//   int len = 0;

//   printf("�Է� : ");
//   scanf("%s", str);    // ������ �������� ���� �Է��� ������  scanf(), ������ ������ �Է��� ���� �� gets()

//   len = strlen(str);   // str�� ����� ���ڿ��� ���̸� len�� �����Ѵ�.(NULL ����)

//   printf("��� : ");
//   for(int i = len - 1; i >= 0; --i)
//   {   // for���� �ʱⰪ�� len���� �־� �ڿ��� ���� ���ڿ��� ����Ѵ�.
//      printf("%c", str[i]);
//   }
//   printf("\n");

//   return 0;
//}


//1���� 100���� ���ϱ� (while) ���� ����ϱ� 
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
	
	
//	while( i <= 100)
//	 {
//	 	sum += i;
//		i++;
//	}
//	printf("�������� : %d",sum);
//	return 0;
// }

