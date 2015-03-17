#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%7s %6s\n", "Celsius", "Fahr");
    while (celsius <= upper) {
        fahr = celsius / (5.0 / 9.0) + 32;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
