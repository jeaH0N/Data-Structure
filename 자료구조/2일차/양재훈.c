#include <stdio.h>
#include <string.h>
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
    change_A();
}


