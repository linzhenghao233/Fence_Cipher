#include <stdio.h>
#include <ctype.h>

int main(void) {
	char name[30], ch;
	int i, row, col, j, k, add;
	i = 1;

	printf("请输入你的名字拼音：");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			continue;
		else if (ch == '\n')
			break;

		name[i] = ch;
		i++;
	}
	i--;

	printf("请输入每行的个数：");
	scanf_s("%d", &col);
	if (col > i) {
		printf("请输入正确的行数：");
		scanf_s("%d", &col);
	}

	row = i / col;

	for (j = 0; j <= row; j++) {
		for (k = 1; k <= i; k += col) {
			printf("%c", name[j + k]);
		}
	}
	printf("\n");
	

	return 0;
}