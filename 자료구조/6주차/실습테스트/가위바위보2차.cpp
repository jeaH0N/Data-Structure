#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//가위바위보10번 확률 
int win = 0;
int same = 0;
int lose = 0;
int num = 1;
double percent;
void PrintString(int n)
{
 if (n == 1) printf("가위");
 else if (n == 2) printf("바위");
 else if (n == 3) printf(" 보 ");
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
  printf("잘못 입력하셨습니다!!\n");
  num--;
 }
}
int Decision(int user, int com)
{
 if (com == user) // 비긴경우
 {
  same++;
  printf("비겼다!\n");
  return 0;
 }
 else if ((com == 1 && user == 2) ||
  (com == 2 && user == 3) ||
  (com == 3 && user == 1)) // user가 이긴경우
 {
  win++;
  printf("이겼다!\n");
  return 1;
 }
 else if ((com == 1 && user == 3) ||
  (com == 2 && user == 1) ||
  (com == 3 && user == 2)) // 진 경우
 {
  lose++;
  printf("졌다!\n");
  return -1;
 }
}
int main(void)
{
 printf("가위바위보 게임\n");
 while (num<=10)
 {
  int user, com;
  srand((unsigned)time(NULL));
  com = rand() % 3 + 1;
  printf("[%d 번째 승부] 가위(1), 바위(2), 보(3): ", num);
  scanf("%d", &user);
  ++num;
  PrintfMatchup(user, com);
  Decision(user, com);
 }
 percent = (double)win / 10 * 100;
 printf("모든 승부가 끝났습니다. 결과는 %d승 %d무 %d패, 승률은 %.1f%%입니다.\n", win, same, lose, percent);
 return 0;
}
