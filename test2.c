#include <stdio.h>
int main() {
	int x = 1;
	int sum = 0;
	while (x < 1000) {
		if ((x % 5) == 0 || (x % 3) == 0)
			sum += x;
		x += 1;
	}
	printf("%d \n", sum);

	return 0;
}
		
			