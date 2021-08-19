#include <stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2, d3, m3, y3;
    printf("starting date ");
    scanf("%d%d%d", &d1, &m1, &y1);
    printf("ending date ");
    scanf("%d%d%d", &d2, &m2, &y2);

    if (d1 > d2)
    {
        d2 += 31;
        m2 -= 1;
    }

    if (m1 > m2)
    {
        m2 += 12;
        y2 -= 1;
    }
    d3 = d2 - d1;
    m3 = m2 - m1;
    y3 = y2 - y1;
    printf("%d daays %d months %d year ", d3, m3, y3);

    return 0;
}