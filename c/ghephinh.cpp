#include <stdio.h>
#include <math.h>

void swap(int* a1, int* a2) {
	int t = *a1;
	*a1 = *a2;
	*a2 = t;
}

int main() {

	int a1, a2, b1, b2, c1, c2;

	scanf("%d %d", &a1, &a2);
	scanf("%d %d", &b1, &b2);
	scanf("%d %d", &c1, &c2);

	if (a1 < a2) swap(&a1, &a2);
	if (b1 < b2) swap(&b1, &b2);
	if (c1 < c2) swap(&c1, &c2);

	if (b1 > a1) {
		swap(&b1, &a1);
		swap(&b2, &a2);
	}

	if (c1 > a1) {
		swap(&c1, &a1);
		swap(&c2, &a2);
	}

	if (c1 > b1) {
		swap(&c1, &b1);
		swap(&c2, &b2);
	}

	int c = a1;
	if (((b1 + c1 == c && b2 == c2) || (b1 + c2 == c && b2 == c1) || (c2 + b2 == c && c1 == b1))
		|| ((a1 == c && b1 == c && c1 == c && a2 + b2 + c2 == c))) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;
}
