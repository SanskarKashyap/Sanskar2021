#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int coeff;
    int pow_of_x;
    int pow_of_y;
    struct link *next;
} Polynomial;

void my_create_poly(Polynomial **);
void my_show_poly(Polynomial *);
void my_add_poly(Polynomial **, Polynomial *, Polynomial *);

int main(void)
{
    int ch;
    do
    {
        Polynomial *poly1, *poly2, *poly3;

        printf("\nCreate 1st expression\n");
        my_create_poly(&poly1);
        printf("\nStored the 1st expression");
        my_show_poly(poly1);

        printf("\nCreate 2nd expression\n");
        my_create_poly(&poly2);
        printf("\nStored the 2nd expression");
        my_show_poly(poly2);

        my_add_poly(&poly3, poly1, poly2);
        my_show_poly(poly3);

        printf("\nAdd two more expressions? (Y = 1/N = 0): ");
        scanf("%d", &ch);
    } while (ch);
    return 0;
}

void my_create_poly(Polynomial **node)
{
    int flag;
    int coeff, pow_of_x, pow_of_y;
    Polynomial *tmp_node;
    tmp_node = (Polynomial *)malloc(sizeof(Polynomial));
    *node = tmp_node;
    do
    {
        printf("\nEnter Coeff:");
        scanf("%d", &coeff);
        tmp_node->coeff = coeff;
        printf("\nEnter pow_of_x:");
        scanf("%d", &pow_of_x);
        tmp_node->pow_of_x = pow_of_x;
        printf("\nEnter pow_of_y:");
        scanf("%d", &pow_of_y);
        tmp_node->pow_of_y = pow_of_y;

        tmp_node->next = NULL;
        printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0): ");
        scanf("%d", &flag);

        if (flag)
        {
            tmp_node->next = (Polynomial *)malloc(sizeof(Polynomial));
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    } while (flag);
}

void my_show_poly(Polynomial *node)
{
    printf("\nThe polynomial expression is:\n");
    while (node != NULL)
    {
        printf("\t%d X^%d Y^%d\t", node->coeff, node->pow_of_x, node->pow_of_y);
        node = node->next;
        if (node != NULL)
            printf(" + ");
    }
}

void my_add_poly(Polynomial **result, Polynomial *poly1, Polynomial *poly2)
{
    Polynomial *tmp_node;
    tmp_node = (Polynomial *)malloc(sizeof(Polynomial));
    tmp_node->next = NULL;
    *result = tmp_node;
    while (poly1 && poly2)
    {
        if (poly1->pow_of_x > poly2->pow_of_x)
        {
            tmp_node->pow_of_x = poly1->pow_of_x;
            tmp_node->pow_of_y = poly1->pow_of_y;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow_of_x < poly2->pow_of_x)
        {
            tmp_node->pow_of_x = poly2->pow_of_x;
            tmp_node->pow_of_y = poly2->pow_of_y;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else if (poly1->pow_of_x == poly2->pow_of_x && poly1->pow_of_y > poly2->pow_of_y)
        {
            tmp_node->pow_of_x = poly1->pow_of_x;
            tmp_node->pow_of_y = poly1->pow_of_y;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        else if (poly1->pow_of_x == poly2->pow_of_x && poly1->pow_of_y < poly2->pow_of_y)
        {
            tmp_node->pow_of_x = poly2->pow_of_x;
            tmp_node->pow_of_y = poly2->pow_of_y;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        else if (poly1->pow_of_x == poly2->pow_of_x && poly1->pow_of_y == poly2->pow_of_y)
        {
            tmp_node->pow_of_x = poly1->pow_of_x;
            tmp_node->pow_of_y = poly1->pow_of_y;
            tmp_node->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        if (poly1 && poly2)
        {
            tmp_node->next = (Polynomial *)malloc(sizeof(Polynomial));
            tmp_node = tmp_node->next;
            tmp_node->next = NULL;
        }
    }

    while (poly1 || poly2)
    {

        tmp_node->next = (Polynomial *)malloc(sizeof(Polynomial));
        tmp_node = tmp_node->next;
        tmp_node->next = NULL;

        if (poly1)
        {
            tmp_node->pow_of_x = poly1->pow_of_x;
            tmp_node->pow_of_y = poly1->pow_of_y;
            tmp_node->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2)
        {
            tmp_node->pow_of_x = poly2->pow_of_x;
            tmp_node->pow_of_y = poly2->pow_of_y;
            tmp_node->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
    }

    printf("\nAddition Complete");
}