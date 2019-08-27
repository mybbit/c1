#include <stdio.h>
int main() {
	int a, b;
	int max(int x, int y);
	scanf("%d %d", &a, &b);
	// 输入空格再输入另一个数字, 取决于两个%d之间的分隔 
	int c = max(a, b);
	printf("max = %d\n", c);
	return 0;
}

int max(int x, int y) {
	if (x >= y) {
		return x;
	} else {
		return y;
	}
}

