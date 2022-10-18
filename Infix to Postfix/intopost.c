#include <stdio.h>
#include<stdlib.h>
struct stack{
	char data;
	struct stack *next;
};

struct stack *s=NULL;
struct stack *temp;
char a;


struct stack* push(struct stack *s, int x){
	temp=(struct stack*)malloc(sizeof(struct stack));
	temp->data=x;
	temp->next=s;
	s=temp;
	temp=NULL;
	return s;	
}

struct stack* pop(){
	a=s->data;
        if(a!='(')
	 printf("%c",a);
	temp=s;
	s=s->next;
	temp->next=NULL;
	free(temp);
	temp=NULL;
	return s;
}

void topostfix(char*exp){
	char post[50];
	char *poststart;
	poststart=post;
	while(*exp){
		switch(*exp){
			case ' ':break;
			case '+':
			case '-':
				 while(s!=NULL && s->data!='('){
					s=pop();
				 }
				 s=push(s,*exp);
				 break;
			case '*':
			case '/':
				 while(s!=NULL && (s->data=='*' || s->data=='/')){
					s=pop();
					
				 }
				 s=push(s,*exp);
				 break;
			case '(':s=push(s,*exp);
				 break;
			case ')':while(s!=NULL){
				 	s=pop();
				 	if(*exp=='(')
				 		break;
				 	
				 }
				 break;
			default:printf("%c",*exp);
		}
		exp++;
	}
	while(s!=NULL){
		s=pop();
	}	
	
	
} 

int main(){
	char exp[50];
	printf("Enter expression(infix):\n");
	scanf("%s",exp);
	topostfix(exp);
	return 0;
}
/*
Output:
Enter expression(infix):
a*b+5
ab*5+
*/
