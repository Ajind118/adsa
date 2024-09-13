#include<stdio.h>
#include<stdlib.h>

struct stud
{
    int no;
    struct stud *next;
};
typedef struct stud sll;
sll *head = NULL;

void create()
{
    if(head != NULL)
    {
        printf("List Is Already Created");
    }
    else
    {
        head = (sll *)malloc(sizeof(sll));
        printf("\nEnter the no: ");
        scanf("%d", &head->no);
        head->next = NULL;
    }
}

void display()
{
    if(head == NULL)
    {
        printf("The List Is Not Created Yet \n");
    }
    else
    {
        sll *temp;
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->no);
            temp = temp->next;
        }
        printf("\n");
    }
}

void insert_last()
{
    if (head == NULL)
    {
        printf("List is not created.\n");
    }
    else
    {
        sll *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next; // Traverse to the last node
        }

        // Create new node
        sll *newnode = (sll *)malloc(sizeof(sll));
        printf("\nEnter Value: ");
        scanf("%d", &newnode->no);
        newnode->next = NULL; // Set new node's next to NULL

        // Link the new node at the end
        temp->next = newnode;
    }
}

void main()
{
    int c = 0;
    while (c != 6)
    {
        printf("\n 1. Create ");
        printf("\n 2. Insert At Last");
        printf("\n 3. Display");
        printf("\n 6. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            create();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            display();
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please choose again.\n");
            break;
        }
    }
}
