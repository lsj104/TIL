#include <stdio.h>
int main(void)
{
    int score;
    printf("성적을 입력하세요 (0~100):");
    scanf_s("%d", &score);
    if ((score <= 100) && (score >= 95))
    {
        printf("학점은 A+입니다\n");
    }
    else if ((score <= 94) && (score >= 90))
    {
        printf("학점은 A입니다\n");
    }
    else if ((score <= 89) && (score >= 85))
    {
        printf("학점은 B+입니다\n");
    }
    else if ((score <= 79) && (score >= 75))
    {
        printf("학점은 B입니다\n");
    }
    else if ((score <= 74) && (score >= 70))
    {
        printf("학점은 C+입니다\n");
    }
    else if ((score <= 69) && (score >= 65))
    {
        printf("학점은 C입니다\n");
    }
    else if ((score <= 64) && (score >= 60))
    {
        printf("학점은 D+입니다\n");
    }
    else if ((score <= 59) && (score >= 0))
    {
        printf("학점은 D입니다\n");
    }
    else if (score == 999)
    {
        printf("학점프로그램을 종료합니다\n");
    }
    else
    {
        printf("성적을 올바르게 입력하세요 (0-100)\n");
    }
    return 0;
}