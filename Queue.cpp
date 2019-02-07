#include <stdio.h>
#include<stdlib.h>
#define max 5

 void insert_from_rear();
 void delete_from_front();
 void display();

int queue[max];
int rear = - 1;
int front = 0;

main()
{
    int c,item;
    while(1)
    {
    printf(" \n enter \n 1 for insert \n 2 for delete \n 3 for display \n 4 for exit \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: 
                
                insert_from_rear();
                break;
        case 2: delete_from_front();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: printf("\n wrong choice \n");
    }
    }
    
}

void insert_from_rear()
{ int item;
	printf("\n enter the element the element to be inserted \n");
                scanf("%d",&item);
    if(rear==max-1)
    printf("\n Queue overflow");
    else
    {
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        rear++;
        queue[rear]=item;
    }
}

void delete_from_front()
{
    int del=0;
    if(rear==-1&&front==0||front>rear)
    printf("\n Queue underflow");
    else
    {
        del=queue[front];
        printf("the item deleted is %d",queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if(rear==-1&&front==0)
    printf("\n Queue is empty");
    else
    {
        for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
        
    }
}


