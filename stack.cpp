
  #include <stdio.h>
//#include<process.h>
#include<stdlib.h>
#define maxsize 5

void push();
void pop();
void display();

int top=-1;
int stack[maxsize];
int main()
{
    int choice;
    while(1)
    {
    	
	printf("\n Enter \n 1. For insertion \n 2. For deletion \n 3. For displaying and \n 4. For exit \n");
    scanf("%d", &choice);
    
	
	 switch(choice)
    {
        case 1: 
                push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(1);
        default: printf("\n Wrong Choice \n");
        
    }
  }
}

void push()
{
    int item;;
    printf("\n enter the item to be inserted \n");
   scanf("%d",&item);
  if(top==maxsize-1)  
  printf("\n Stack overflow \n");
  else
  {
  	top++;
  stack[top]=item;
  
  }
}

void pop()
{
    int del=0;
    if(top==-1)
    printf("\n Stack underflow \n ");
    else
    {
        
        del=stack[top];
        printf("\n The element deleted is %d ", del);
        top--;
    }
}

void display()
{
    int i=0;
    if(top==-1)
    printf("\n Stack is empty \n");
    else
    {
    	for(i=top;i>=0;i--)
        {
        	
		printf("%d \t",stack[i]);
        
        }
    }
}


