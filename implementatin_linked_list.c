#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = NULL;
    struct node *newnode;
    struct node *temp;

    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the value: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }

        printf("Do you want to continue (0,1): ");
        scanf("%d", &choice);
    }

    temp = head;

    printf("Linked list: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}