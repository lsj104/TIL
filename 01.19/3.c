#include <stdio.h>
#include <string.h>
#define MANU 7
#pragma warning(disable:4996)

int main(void)
{
	int i, index;
	char dic[MANU][2][30] = {
		{"������", "û����"},
		{"ȭ����","�����"},
		{"������","�����"},
		{"�����", "Į����"},
		{"�ݿ���", "�ø�"},
		{"�����", "�ҺҰ��"},
		{"�Ͽ���", "����Ұ��"},
	};
	char week[30];
	printf("������ �Է����ּ���:");
	scanf("%s", week);

	index = 0;
	for (i = 0; i < MANU; i++)
	{
		if (strcmp(dic[index][0], week) == 0)
		{
			printf("%s: %s\n", week, dic[index][1]);
			return 0;
		}
		index++;
	}
	printf("�߸��Է��ϼ̽��ϴ�.\n");

	return 0;
}