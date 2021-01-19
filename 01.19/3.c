#include <stdio.h>
#include <string.h>
#define MANU 7
#pragma warning(disable:4996)

int main(void)
{
	int i, index;
	char dic[MANU][2][30] = {
		{"월요일", "청국장"},
		{"화요일","비빔밥"},
		{"수요일","된장찌개"},
		{"목요일", "칼국수"},
		{"금요일", "냉면"},
		{"토요일", "소불고기"},
		{"일요일", "오삼불고기"},
	};
	char week[30];
	printf("요일을 입력해주세요:");
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
	printf("잘못입력하셨습니다.\n");

	return 0;
}