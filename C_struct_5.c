#include <stdio.h>

struct name {
	int a;
	char b;
};
int main(void)
{
	struct name h;
	h.a = 6;
	h.b = 'r';
	printf("%d, %c", h.a, h.b);

	return 0;
}