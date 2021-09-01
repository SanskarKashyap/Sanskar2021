#include <stdio.h>
#include <stdlib.h>

struct link
{
    int info;
    struct link *prev;
    struct link *next;
} * start;

void create_list(int data)
{
    struct link *temp, *q;
    temp = (struct link *)malloc(sizeof(struct link));
    temp->info = data;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
        temp->prev = q;
    }
}

void display()
{
    struct link *p;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    p = start;
    printf("List is:\n");
    while (p != NULL)
    {
        printf("%d<->", p->info);
        p = p->next;
    }
    printf("\n");
}

void reversedis()
{
    struct link *p;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    p = start;
    printf("Reverse List is:\n");
    while (p->next != NULL)
        p = p->next;
    while (p != NULL)
    {
        printf("%d<->", p->info);
        p = p->prev;
    }
    printf("\n");
}

void checkEmpty()
{
    if (start == NULL)
        printf("List is empty.\n");
    else
        printf("List is not empty.\n");
}

void insert_beg(int data)
{
    struct link *temp;
    temp = (struct link *)malloc(sizeof(struct link));
    temp->prev = NULL;
    temp->info = data;
    temp->next = start;
    start->prev = temp;
    start = temp;
}

void insert_pos(int pos, int data)
{
    struct link *temp, *q;
    int i;
    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        q = q->next;
        if (q == NULL)
        {
            printf("Enter a valid position to enter.\n");
            return;
        }
    }
    temp = (struct link *)malloc(sizeof(struct link));
    temp->info = data;
    q->next->prev = temp;
    temp->next = q->next;
    temp->prev = q;
    q->next = temp;
}

void delete_beg()
{
    struct link *temp;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    temp = start;
    start = start->next;
    start->prev = NULL;
    temp->next = NULL;
    free(temp);
}

void delete_end()
{
    struct link *q, *temp;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    q = start;
    while (q->next->next != NULL)
        q = q->next;
    temp = q->next;
    temp->prev = NULL;
    free(temp);
    q->next = NULL;
}

void delete_pos(int pos)
{
    struct link *temp, *q;
    int i;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        q = q->next;
        if (q == NULL)
        {
            printf("Enter valid position.\n");
            return;
        }
    }
    temp = q->next;
    q->next = temp->next;
    temp->next->prev = q;
    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
}

void delete_key(int data)
{
    struct link *temp, *q;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if (start->info == data)
    {
        temp = start;
        start = start->next;
        start->prev = NULL;
        free(temp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {
        if (q->next->info == data)
        {
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            free(temp);
            return;
        }
        q = q->next;
    }
    if (q->next->info == data)
    {
        temp = q->next;
        free(temp);
        q->next = NULL;
        return;
    }
    printf("%d is not present in list.\n", data);
}

void count()
{
    struct link *q = start;
    int c = 0;
    while (q != NULL)
    {
        q = q->next;
        c++;
    }
    printf("The number of elements in the list = %d\n", c);
}

void search(int data)
{
    struct link *q = start;
    int pos = 1;
    while (q != NULL)
    {
        if (q->info == data)
        {
            printf("Element %d is present at %d position.\n", data, pos);
            return;
        }
        q = q->next;
        pos++;
    }
    if (q == NULL)
        printf("%d is not present in list.\n", data);
}
int main()
{
    int opt, n, i, data, pos;
    start = NULL;
    while (1)
    {
        printf("1.Create List\n");
        printf("2.Traverse Forward\n");
        printf("3.Traverse Backward\n");
        printf("4.Check if list is empty\n");
        printf("5.Insert at beginning\n");
        printf("6.Insert at end\n");
        printf("7.Insert at certain position\n");
        printf("8.Delete at beginning\n");
        printf("9.Delete at end\n");
        printf("10.Delete at certain position\n");
        printf("11.Delete a given key\n");
        printf("12.Count\n");
        printf("13.Search an element\n");
        printf("14.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            system("clear");
            printf("Enter no. of nodes: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Enter element: ");
                scanf("%d", &data);
                create_list(data);
            }
            break;
        case 2:
            system("clear");
            printf("\n");
            display();
            printf("\n");
            break;
        case 3:
            system("clear");
            printf("\n");
            reversedis();
            printf("\n");
            break;
        case 4:
            system("clear");
            checkEmpty();
            printf("\n");
            break;
        case 5:
            system("clear");
            printf("Enter element to insert at beginning: ");
            scanf("%d", &data);
            insert_beg(data);
            break;
        case 6:
            system("clear");
            printf("Enter element to insert at end: ");
            scanf("%d", &data);
            create_list(data);
            break;
        case 7:
            system("clear");
            printf("Enter position to insert at: ");
            scanf("%d", &pos);
            printf("Enter element: ");
            scanf("%d", &data);
            insert_pos(pos, data);
            break;
        case 8:
            system("clear");
            delete_beg();
            break;
        case 9:
            system("clear");
            delete_end();
            break;
        case 10:
            system("clear");
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            delete_pos(pos);
            break;
        case 11:
            system("clear");
            printf("Enter a element to delete: ");
            scanf("%d", &data);
            delete_key(data);
            break;
        case 12:
            system("clear");
            count();
            printf("\n");
            break;
        case 13:
            system("clear");
            printf("Enter a element to search: ");
            scanf("%d", &data);
            search(data);
            printf("\n");
            break;
        case 14:
            system("clear");
            exit(0);
        }
    }

    return 0;
}