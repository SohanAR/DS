#include<stdio.h>
#define N 5
int stack[8],top=-1;
void push()
{
    int x;
    if(top==(N-1))
    {
        printf("\nStack overflow");
    }
    else
    {
        printf("\nEnter the number to be inserted");
        scanf("\n%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int itm;
    if(top==-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        itm=stack[top];
        printf("The element popped is\n %d",itm);
        top--;

    }
}
void display()
{
    int i;
    if(top>=0)
    {
        for(i=top;i>=0;i--)
        {
            printf("\n%d",stack[i]);
        }
    }
    else
        printf("\nThe stack is empty");

}
void main()
{
    int choice;
    do{
    printf("\nEnter these keys for the following ops 1.push 2.pop 3.display 4.exit");
    scanf("\n%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
        break;
    }
    }while(choice!=4);
};
