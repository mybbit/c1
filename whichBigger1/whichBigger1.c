#include <stdio.h>
int main() {
	int a, b;
	int max(int x, int y);
	scanf("%d %d", &a, &b);
	// ����ո���������һ������, ȡ��������%d֮��ķָ� 
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

