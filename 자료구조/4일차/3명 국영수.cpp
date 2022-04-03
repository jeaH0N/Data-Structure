#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct

{
        float kor;
        float eng;
        float mat;
        float sum;
        float avg;
        int rank;
} STUDENT;


void setSum(STUDENT student[], int i);
void setAvg(STUDENT student[], int i);
void setRank(STUDENT student[]);

int main()
{

        STUDENT student[3];
        int students_len = sizeof(student) / sizeof(STUDENT);

        for (int i = 0; i < 3; i++){

                 printf("%d번째 학생의 3과목의 성적을 입력해 주세요 EX) 85 54 34 : ", i + 1);
                 scanf("%f %f %f", &student[i].kor, &student[i].eng, &student[i].mat);
                 setSum(student, i);
                 setAvg(student, i);
        }

        setRank(student, students_len);
        for (int i = 0; i < 3; i++){
               printf("[%d번째 학생] 국어 : %.2f, 영어 : %.2f, 수학 : %.2f, 총점 : %.2f, 평균 : %.2f, 석차 : %d \n", i + 1, student[i].kor, student[i].eng, student[i].mat, student[i].sum, student[i].avg, student[i].rank);
        }
        return 0;
}


void setSum(STUDENT student[], int i){
       student[i].sum =  student[i].eng + student[i].kor + student[i].mat;
}

// 구조체는 값이 복사된다. 절대 주소가 아니다.
void setAvg(STUDENT student[], int i) {
      student[i].avg = student[i].sum / 3.0;
}

void setRank(STUDENT student[], int length) {
	 for (int i = 0; i < length - 1; i++) {
            for (int j = 0; j < length; j++){
                if (student[i].avg < student[j].avg){

                    STUDENT temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;
				 }
            }
     }
	
    for (int i = 0; i < length; i++){
		student[i].rank = i + 1;
    }
}
