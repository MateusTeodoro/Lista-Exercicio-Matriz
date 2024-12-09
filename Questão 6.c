#include <stdio.h>

int calcula(int x, int y) {

	if (x == y) {
		return 1;
	}

	else {
		return 0;
	}
}

int main()
{
	int b, h, r;
	scanf("%d %d", &b, &h);

	r = calcula(b, h);

	if (r == 1) {
		printf("1");
	}

	else {
		printf("0");
	}
	return 0;
}