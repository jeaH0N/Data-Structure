#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����������10�� Ȯ�� 
int win = 0;
int same = 0;
int lose = 0;
int num = 1;
double percent;
void PrintString(int n)
{
 if (n == 1) printf("����");
 else if (n == 2) printf("����");
 else if (n == 3) printf(" �� ");
}
void PrintfMatchup(int user, int com)
{
 if (user == 1 || user == 2 || user == 3)
 {
  printf("User: ");
  PrintString(user);
  printf("   vs   ");
  printf("Com: ");
  PrintString(com);
  printf("\n");
 }
 else
 {
  printf("�߸� �Է��ϼ̽��ϴ�!!\n");
  num--;
 }
}
int Decision(int user, int com)
{
 if (com == user) // �����
 {
  same++;
  printf("����!\n");
  return 0;
 }
 else if ((com == 1 && user == 2) ||
  (com == 2 && user == 3) ||
  (com == 3 && user == 1)) // user�� �̱���
 {
  win++;
  printf("�̰��!\n");
  return 1;
 }
 else if ((com == 1 && user == 3) ||
  (com == 2 && user == 1) ||
  (com == 3 && user == 2)) // �� ���
 {
  lose++;
  printf("����!\n");
  return -1;
 }
}
int main(void)
{
 printf("���������� ����\n");
 while (num<=10)
 {
  int user, com;
  srand((unsigned)time(NULL));
  com = rand() % 3 + 1;
  printf("[%d ��° �º�] ����(1), ����(2), ��(3): ", num);
  scanf("%d", &user);
  ++num;
  PrintfMatchup(user, com);
  Decision(user, com);
 }
 percent = (double)win / 10 * 100;
 printf("��� �ºΰ� �������ϴ�. ����� %d�� %d�� %d��, �·��� %.1f%%�Դϴ�.\n", win, same, lose, percent);
 return 0;
}
