#include <stdio.h>
#define MAX_SIZE 100
/* Дектярев Михаил Павлович
П.И. 1-1
Одномерные массивы и статистика элементов
Самостоятельная
*/

int main(void) {
    int a[MAX_SIZE], n;
    int b[MAX_SIZE], nb;
    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
	if (n < 1 || n > MAX_SIZE)
	{
	    printf("Size error\n");
	    return 1;
	}
	for (int i = 0; i < n; i++)
	{
	    printf("a[%d]: ", i);
	    if (scanf("%d", &a[i]) != 1)
	    {
	        printf("Input error\n");
	        return 1;
	    }
	    if (a[i] < -1000 || a[i] > 1000)
	    {
	        printf("Value error\n");
	        return 1;
	    }
	}
	int repl;
	for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            b[i] = 0;
            repl++;
        } else {
            b[i] = a[i];
        }
        nb += b[i];
    }
	printf("\nМассив a: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nМассив b: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\nЧисло замен: %d", repl);
    printf("\nСумма элементов b: %d", nb);
	return 0;
}   
