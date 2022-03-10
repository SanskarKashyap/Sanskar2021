#include <stdio.h>
int main()
{
    char c[] = "KIIT UNIVERSITY";
    char *p = c;
    printf("%s", p + p[3] - p[1]);
}