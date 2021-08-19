#include<stdio.h>
#include<string.h>
int main()
{
    char s1[8]="Sanskar";
    char s2[6]="Harry";
    char s3 [56];
    printf("\n\n the strcmp for s1, s2 retuned %d\n " , strcmp(s1,s2));
 
    // puts);
    printf("Combine s and s1 : %s%s\n" ,s1,s2);
   // // puts(strlen(s)); puts dont work for length 
     printf("Length of S : %d\n" , strlen(s1));
     printf("Length of S1 : %d\n" , strlen(s2));
    //  printf("reverse  of S : %s\n" , strrev(s1));
    //  printf("reverse  of S1 : %s\n" , strrev(s2));

    //  s3 = (strcat(s2,s1) ;
    strcpy(s3,strcat(s2,s1));
    puts(s3);



    return 0;
}  