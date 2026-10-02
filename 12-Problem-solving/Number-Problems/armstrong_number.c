#include <stdio.h>

int main() {
    int num, original, digit, count = 0, temp;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
