#include <stdio.h>
int main(void)
{
    int score;
    printf("������ �Է��ϼ��� (0~100):");
    scanf_s("%d", &score);
    if ((score <= 100) && (score >= 95))
    {
        printf("������ A+�Դϴ�\n");
    }
    else if ((score <= 94) && (score >= 90))
    {
        printf("������ A�Դϴ�\n");
    }
    else if ((score <= 89) && (score >= 85))
    {
        printf("������ B+�Դϴ�\n");
    }
    else if ((score <= 79) && (score >= 75))
    {
        printf("������ B�Դϴ�\n");
    }
    else if ((score <= 74) && (score >= 70))
    {
        printf("������ C+�Դϴ�\n");
    }
    else if ((score <= 69) && (score >= 65))
    {
        printf("������ C�Դϴ�\n");
    }
    else if ((score <= 64) && (score >= 60))
    {
        printf("������ D+�Դϴ�\n");
    }
    else if ((score <= 59) && (score >= 0))
    {
        printf("������ D�Դϴ�\n");
    }
    else if (score == 999)
    {
        printf("�������α׷��� �����մϴ�\n");
    }
    else
    {
        printf("������ �ùٸ��� �Է��ϼ��� (0-100)\n");
    }
    return 0;
}