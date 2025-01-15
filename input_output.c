#include <stdio.h>
#include <ctype.h>

#define IN 1  /* 在单词内 */
#define OUT 0 /* 在单词外 *//* 统计输入中的行数、单词数和字符数 */

int main(void)
{
    int c;
    double nc;
    int nl;
    int space;
    int tab;

    if (getchar() != EOF)
        return (0);
    else
        return (1);

    while ((c = getchar()) != EOF)
        putchar(c);
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%.0f\n", nc);

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);

    space = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++space;
    printf("%d\n", space);

    tab = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++tab;
    printf("%d\n", tab);

    int size;
    int i;
    char buffer[size];
    while ((c = getchar()) != EOF)
    {
        buffer[i] = c;
        i++;
    }
    int nw, state;
    state = OUT;
    nw = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %.0f\n", nl, nw, nc);
    return (0);
}