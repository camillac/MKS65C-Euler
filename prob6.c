#include <stdio.h>

int main() {
	int counter = 1;
	int sum_sq = 0;
	int sum = 0;
	while (counter <= 100) {
		sum_sq += counter * counter;
		sum += counter;
		counter++;
	}
	int dif = (sum * sum) - sum_sq;
	
	printf("difference: %d\n", dif);
	
}