#include <stdio.h>
int main()
{
int numbers[] = {104, 3773, 13, 121, 77, 30751};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Number\tMultiple\tSum Even\tPrime\n");
    printf("------\t--------\t--------\t-----\n");

    for (int i = 0; i < size; i++) {
        int isMultiple, isSumEven, isPrime;
        analyzeNumber(numbers[i], &isMultiple, &isSumEven, &isPrime);
        printf("%d\t%s\t\t%s\t\t%s\n",
               numbers[i],
               isMultiple ? "Yes" : "No",
               isSumEven ? "Yes" : "No",
               isPrime ? "Yes" : "No");
    }

    return 0;
}
void analyzeNumber(int num, int *isMultiple, int *isSumEven, int *isPrime) {
    *isMultiple = (num % 7 == 0 || num % 11 == 0 || num % 13 == 0);
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    *isSumEven = (sum % 2 == 0);
    if (num <= 1) {
        *isPrime = 0;
    } else {
        *isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                *isPrime = 0;
                break;
            }
        }
    }
}