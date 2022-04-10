#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//영어 이름을 대문자에서 소문자로 출력 
void change_A()
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
	printf("영문 소문자와 대문자를 적으시오.\n"); 
    change_A();
}
