#include <stdio.h>
#include <stdlib.h>
 
void push1(int data)
{
    st1[++top1] = data;
}
void push2(int data)
{
    st2[++top2] = data;
}
int pop1()
{
    return(st1[top1--]);
}
int pop2()
{
    return(st2[top2--]);
}
void enqueue()
{
    int data, i;
 
    printf("Enter data into queue");
    scanf("%d", &data);
    push1(data);
    count++;
}
void dequeue()
{
    int i;
 
    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++)
    {
        push1(pop2());
    }
}
void display()
{
    int i;
 
    for (i = 0;i <= top1;i++)
    {
        printf(" %d ", st1[i]);
    }
}
void create()
{
    top1 = top2 = -1;
}
 
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
 
void main()
{
    int ch;
 
    printf("\n1 - Enqueue element into queue");
    printf("\n2 - Dequeu element from queue");
    printf("\n3 - Display from queue");
    printf("\n4 - Exit");
    create();
    while (1)
    {
        printf("\nEnter choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}
