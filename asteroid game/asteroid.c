#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
#include&lt;string.h&gt;
#include&lt;math.h&gt;
#define SIZE 100
struct stack
{
    int data[SIZE];
    int top;
};
void push(struct stack *sptr)
{
    int num;
    scanf("%d",&amp;num);
    if(sptr-&gt;top==SIZE-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        if(num!=0)
       {
        sptr-&gt;top++;
        sptr-&gt;data[sptr-&gt;top]=num;
        }
    }
}
int pop(struct stack *sptr)
{
    int num;
    if(sptr-&gt;top==-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        num=sptr-&gt;data[sptr-&gt;top];
        sptr-&gt;top--;
    }
    return num;
}
void asteriod(struct stack * s1ptr,struct stack * s2ptr)
{
    int c1=0,c2=0,num1,num2;
    while(s1ptr-&gt;top!=-1&amp;&amp;s2ptr-&gt;top!=-1)
    {
        num1=pop(s1ptr);
        num2=pop(s2ptr);
        if(num1&gt;0&amp;&amp;num2&gt;0)
        {
            printf("0 ");
            c1++;
        }
        else if(num1&lt;0&amp;&amp;num2&lt;0)
{
printf("0 ");
c1++; }
else
{
printf("1 ");
c2++;
}
}
printf("\n%d",c2);
printf("\n%d",c1);
 }
int main() {
struct stack * s1ptr;
struct stack * s2ptr;
struct stack s2,s1;
s1ptr=&amp;s1;
s2ptr=&amp;s2;
s1ptr-&gt;top=-1;
    s2ptr-&gt;top=-1;
    int n;
    scanf("%d",&amp;n);
    if(n&lt;1)
    {
        printf("Invalid input.");
        exit(0);
    }
   for(int i=0;i&lt;n;i++)
   {
       push(s1ptr);
   }
    for(int i=0;i&lt;n;i++)
   {
       push(s2ptr);
   }
   asteriod(s1ptr,s2ptr);
    return 0;
}
