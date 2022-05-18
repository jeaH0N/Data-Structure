#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARINGS
#include <windows.h>
#include <stdlib.h>


struct HealthMtg //헬스 관리 구조체
{
    char name[10];
    int age[10];
    int time[10];
    int number[10];//회원 번호 
};


void menu();
void inputMenu(struct HealthMtg* num);
void inputFunc(struct HealthMtg* num);
void outputFunc(struct HealthMtg* num);

void SearchMenu(struct HealthMtg* num);
int searchName(struct HealthMtg* num);
void selectMenu();
int searchName(struct HealthMtg* num);
void SearchName(struct HealthMtg* num);
int searchNumber(struct HealthMtg* num);
void SearchNumber(struct HealthMtg* num);
int searchAge(struct HealthMtg* num);
void SearchAge(struct HealthMtg* num);
void DelFunc(struct HealthMtg* num);
void editFunc(struct HealthMtg* num);
void sortFunc(struct HealthMtg* num);
void loadFile(struct HealthMtg* num);
void saveFile(struct HealthMtg* num);
struct HealthMtg num[10];
int init();

int init() {
    int  i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            num[i].name[j] = -1;
            num[i].number[j] = -1;
            num[i].age[j] = -1;
            num[i].time[j] = -1;//초기화 
        }
    }
}
void selectMenu() {
    int Healthnum;

    while (1)
    {
        system("cls");
        menu();
        printf("->");
        scanf("%d", &Healthnum);
        fflush(stdin);
        system("cls");

        switch (Healthnum) {
        case 1:
        {
            inputMenu(num);
            break;
        }
        case 2:
        {
            outputFunc(num);
            break;
        }
        case 3:
        {
            DelFunc(num);
            break;
        }
        case 4:
        {
            SearchMenu(num);
            break;
        }
        case 5:
        {
            sortFunc(num);
            break;
        }
        case 6:
        {
            editFunc(num);
            break;
        }
        case 7:
        {
            loadFile(num);
            break;
        }
        case 0:
        {
            printf("종료 하겠습니다.\n");
            exit(0);
            break;
        }
    defult:
        {
            break;
        }
        }
        system("pause");
    }
}
int main()
{
    struct HealthMtg num[10];
    init();
    selectMenu();
    return 0;
}
void menu()
{
    printf("--------------------------------------------\n");
    printf("      헬스장 회원 관리 프로그램       \n");
    printf("         1. 신규 정보 등록            \n");
    printf("         2. 회원 정보 출력            \n");
    printf("         3. 회원 정보 삭제            \n");
    printf("         4. 회원 정보 검색            \n");
    printf("         5. 회원 정보 정렬            \n");
    printf("         6. 회원 정보 수정            \n");
    printf("         7. 파일 출력                 \n");
    printf("         0. 종료                      \n");
    printf("-------------------------------------------\n");
}

void inputMenu(struct HealthMtg* num)
{
    int Menu, i;
    printf("-------------------------------------------\n");
    printf("         1. 입력 홈                   \n");
    printf("         2. 파일에 저장               \n");
    printf("         3. 메뉴로 돌아가기           \n");
    printf("-------------------------------------------\n");

    scanf("%d", &Menu);
    fflush(stdin);
    system("cls");

    switch (Menu) {
    case 1:
    {
        inputFunc(num);
        break;
    }
    case 2:
    {
        saveFile(num);
        break;
    }
    case 3:
    {
        selectMenu();
        break;
    }
defult:
    {
        break;
    }
    system("pause");
    }
}

void inputFunc(struct HealthMtg* num)
{
    int i, j;
    printf("정보를 입력하세요\n");
    for (i = 0; i < 10; i++)
    {
        if ((*(num + i)).number[0] == -1)
        {
            break;
        }
    }
    printf("이름 : ");  scanf("%s", (*(num + i)).name);
    fflush(stdin);
    printf("회원 번호 : "); scanf("%d", (*(num + i)).number);
    fflush(stdin);
    printf("나이 : ");  scanf("%d", (*(num + i)).age);
    fflush(stdin);
    printf("등록 시간 : "); scanf("%d", (*(num + i)).time);
}

void outputFunc(struct HealthMtg* num)
{
    int i;
    printf("정보를 출력합니다\n");
    printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");

    for (i = 0; i < 10; i++)
    {
        if ((*(num + i)).number[0] != -1)
        {
            printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        }
    }
}
void SearchMenu(struct HealthMtg* num) {
    int Menu, i;
    printf("-------------------------------------------\n");
    printf("         1. 이름 검색                   \n");
    printf("         2. 회원 번호 검색              \n");
    printf("         3. 나이 검색                   \n");
    printf("         4. 메뉴로 돌아가기             \n");
    printf("-------------------------------------------\n");

    scanf("%d", &Menu);
    fflush(stdin);
    system("cls");

    switch (Menu) {
    case 1:
    {
        SearchName(num);
        break;
    }
    case 2:
    {
        SearchNumber(num);
        break;
    }
    case 3:
    {
        SearchAge(num);
        break;
    }
    case 4:
    {
        selectMenu();
        break;
    }
defult:
    {
        break;
    }
    system("pause");
    }
}
int searchName(struct HealthMtg* num) {
    int i;
    char searchName[10];

    scanf("%s", searchName);
    fflush(stdin);
    for (i = 0; i < 10; i++)
    {
        if (strcmp(searchName, (*(num + i)).name) == 0)
            return i;
    }
    return -1;
}
void SearchName(struct HealthMtg* num)
{
    int i;
    char searchname[10];
    printf("검색 할 이름 > ");
    scanf("%s", &searchname);
    fflush(stdin);
    printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");

    for (i = 0; i < 10; i++)
    {
        if (strcmp(searchname, (*(num + i)).name) == 0) {
            printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        }
    }
}

int searchNumber(struct HealthMtg* num) {
    int i;
    int searchnumber;
    scanf("%d", &searchnumber);
    fflush(stdin);
    for (i = 0; i < 10; i++)
    {
        if (searchnumber == (*(num + i)).number[0])
            return i;
    }
    return -1;
}
void SearchNumber(struct HealthMtg* num) {
    int i;
    printf("검색 할 회원번호 > ");
    i = searchNumber(num);
    if (i >= 0)
    {
        printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
        printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
    }
    else
    {
        printf(" 검색 정보가 없습니다 \n");
        printf(" 메뉴로 돌아가겠습니다 \n");
    }
}
void SearchAge(struct HealthMtg* num) {
    int i;
    int searchnum;
    printf("검색 할 회원 나이 > ");
    scanf("%d", &searchnum);
    fflush(stdin);
    printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
    for (i = 0; i < 10; i++)
    {
        if (searchnum == (*(num + i)).age[0]) {
            printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        }
    }
    if (searchnum < 0) {
        printf("나이를 잘못 입력하셨거나 일치하는 정보가 존재하지 않습니다.");
    }
}
void editFunc(struct HealthMtg* num) {
    int i, j;
    printf("수정할 회원번호 > ");
    i = searchNumber(num);
    if (i >= 0)
    {
        printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
        printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        for (j = 0; j < 10; j++)
        {
            (*(num + i)).name[j] = -1;
            (*(num + i)).number[j] = -1;
            (*(num + i)).age[j] = -1;
            (*(num + i)).time[j] = -1;
        }
        printf("해당 정보가 삭제하였습니다.\n");
        printf("새 정보를 입력하세요.\n");
        for (i = 0; i < 10; i++)
        {
            if ((*(num + i)).number[0] == -1)
            {
                break;
            }
        }
        printf("이름 : ");  scanf("%s", (*(num + i)).name);
        fflush(stdin);
        printf("회원 번호 : "); scanf("%d", (*(num + i)).number);
        fflush(stdin);
        printf("나이 : ");  scanf("%d", (*(num + i)).age);
        fflush(stdin);
        printf("등록 시간 : "); scanf("%d", (*(num + i)).time);
        FILE* fp = fopen("Health.txt", "w");
        fprintf(fp, " %8s     |    %5s     |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
        for (j = 0; j < 10; j++)
        {
            if ((*(num + j)).number[0] != -1)
            {
                fprintf(fp, " %8s     |  %9d       | %5d        | %4d 개월        |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
            }
        }
        fclose(fp);
        printf("수정이 완료되었습니다.\n");
    }
    else
    {
        printf(" 검색 정보가 없습니다 \n");
        printf(" 메뉴로 돌아가겠습니다 \n");
    }

}
void DelFunc(struct HealthMtg* num)
{
    int i, j;

    printf("삭제할 이름 >");
    if ((i = searchName(num)) >= 0)
    {
        for (j = 0; j < 10; j++)
        {
            (*(num + i)).name[j] = -1;
            (*(num + i)).number[j] = -1;
            (*(num + i)).age[j] = -1;
            (*(num + i)).time[j] = -1;
        }
        printf("삭제 하였습니다.\n");
    }
    else
    {
        printf(" 해당 정보가 없습니다 \n");
        printf(" 메뉴로 돌아가겠습니다 \n");
    }

    FILE* fp = fopen("Health.txt", "w");
    fprintf(fp, " %8s     |    %5s     |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
    for (j = 0; j < 10; j++)
    {
        if ((*(num + j)).number[0] != -1)
        {
            fprintf(fp, " %8s     |  %9d       | %5d        | %4d 개월        |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        }
    }
    fclose(fp);
    printf("저장되었습니다.\n");
}
void sortFunc(struct HealthMtg* num) {
    int i, j, r;
    struct HealthMtg temp;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (num[i].number[0] > num[j].number[0]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("오름차순으로 정렬되었습니다.\n");


    printf("정보를 출력합니다\n");
    printf(" %8s     |     %5s    |    %5s     |    %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");

    for (i = 0; i < 10; i++)
    {
        if ((*(num + i)).number[0] != -1)
        {
            printf(" %8s     |%10d        |%8d      |  %5d 개월      |\n", (*(num + i)).name, (*(num + i)).number[0], (*(num + i)).age[0], (*(num + i)).time[0]);
        }

    }
}

void loadFile(struct HealthMtg* num)
{
    int c;
    FILE* fp = NULL;

    fp = fopen("Health.txt", "r");

    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    fclose(fp);
}

void saveFile(struct HealthMtg* num)
{
    int j;
    FILE* fp = fopen("Health.txt", "w");
    fprintf(fp, " %8s     | %5s     | %5s     | %5s     |\n", "이름", "회원 번호", "나이", "등록 시간");
    for (j = 0; j < 10; j++)
    {
        if ((*(num + j)).number[0] != -1)
        {
            fprintf(fp, " %8s     | %5d         | %5d     | %5d 개월    |\n", (*(num + j)).name, (*(num + j)).number[0], (*(num + j)).age[0], (*(num + j)).time[0]);
        }
    }
    fclose(fp);
    printf("저장되었습니다.\n");
}