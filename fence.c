#include <stdio.h>

int main(void) {
	char name[30], ch;
	int i, row, col, j, k, add;
	i = 1;

	printf("�������������ƴ����");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			continue;
		else if (ch == '\n')
			break;

		name[i] = ch;
		i++;
	}
	i--;

	printf("������������");
	scanf_s("%d", &row);
	while (row > i) {
		printf("��������ȷ��������");
		scanf_s("%d", &row);
	}

	col = i / row;
	add = i % row;

	for (j = 0; j <= col; j++) {
		for (k = 1; k <= i; k += col) {
			if (k <= add * col + add && k > 1)
				k++;
			if (j == col && (j + k) == (add + 1) * (col + 1))
				break;
			printf("%c", name[j + k]);
		}
	}
	printf("\n");
	

	return 0;
}