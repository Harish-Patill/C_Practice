#include <stdio.h>

int main()
{
    int num = 0;
    int even_sum = 0;

    printf("Enter num: ");
    scanf("%d", &num);

    int original = num;

    while (original > 0)
    {
        int last = original % 10;

        if (last % 2 == 0)
        {
            even_sum += last;
        }

        original /= 10;
    }

    printf("Sum of even digits: %d\n", even_sum);

    return 0;
}