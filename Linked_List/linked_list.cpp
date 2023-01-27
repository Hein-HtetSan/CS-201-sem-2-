#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = static_cast< node*>(malloc(sizeof(struct node)));
    two = static_cast< node*>(malloc(sizeof(struct node)));
    three = static_cast< node*>(malloc(sizeof(struct node)));
    
    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->next = two;
    two->next = three;
    three->next = one;

    head = one;

    return 0;
}