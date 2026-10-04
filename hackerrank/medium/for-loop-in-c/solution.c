 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d %d", &a, &b);

    for (int n = a; n <= b; n++)
    {
        if (n >= 1 && n <= 9)
            printf("%s\n", words[n]);
        else if (n % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
