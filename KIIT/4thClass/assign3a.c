#include <stdio.h>
int main()
{
    int yr, x;
    printf("Enter year\n");
    scanf("%d", &yr);

    yr % 400 == 0 ? printf("ly")
                  : (yr % 100 == 0 ? printf("nly")
                                   : (yr % 4 == 0 ? printf("ly")
                                                  : printf("nly")));

    return 0;
}
