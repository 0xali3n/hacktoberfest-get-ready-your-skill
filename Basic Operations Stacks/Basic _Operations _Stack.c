#include<stdio.h>

int top;
int n;
int max;

int stack[100];

void push();
void pop();
void display();
void peek();



int main()
{
    top=-1;
    
    printf("Enter the size of Stack : ");
    scanf("%d",&n);

    int choice;
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT \n");
    
    do
    {
        printf("\nEnter the choice :");
        scanf("%d",&choice);
  
        switch(choice)
    {
        
        case 1:push();
        break;
    
        case 2:pop();
        break;
        
        case 3:display();
        break;
        
        case 4: printf("\n\t Exiting....");
        break;      
    
        default:
        {
            printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    
    }
    
   }
   while(choice!=4);

}


void push()
{
   if(top>=(n-1))
   {
       printf("\nStack OverFlow");
   }
   
   else 
   {
       char x;
       printf("\nEnter the character to be pushed :");
       scanf(" %c",&x);
       top++;
       
       stack[top] = x;
   }
}


void pop()
{
    if(top<=-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("\n\t The popped character is %c",stack[top]);
        top--;
    }
}


void peek()
{
    printf("Top character of Stack is :");
    printf("%d",stack[top]);
}


void display()
{
    if(top>=0)
    {
        printf("\n The Elements in STACK are: \n");
        
        for(int i=top;i>=0;--i)
        {
            printf("%c\n",stack[i]);
        }
        
    }
    
    else
    {
        printf("\n The STACK is empty ");
    }
    
}
