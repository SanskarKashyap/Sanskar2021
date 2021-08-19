#include <stdio.h>
int main()
{
    int h1, h2, m1, m2, x, y;
    printf("starting Time ");
    scanf("%d%d",&h1,&m1);
    printf("ending Time ");
    scanf("%d%d", &h2,&m2);


    if (m1 > m2)
    {
        m2 += 60;
        h2-=1;
      
    }

    x = m2 - m1;
    y = h2 - h1;
    printf("time diffrence is %d Hr %d Min", y,x );

    return 0;
}