#include <stdio.h>

main()
{
    int c, bl, tl, nl;

    bl = 0;
    tl = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bl++;
        } else if (c == '\t') {
            tl++;
        } else if (c == '\n') {
            nl ++;
        }
    }


    printf("Blank: %d, Tab: %d, Line: %d\n", bl, tl, nl);
}
