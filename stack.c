#include<stdio.h>
#define MAX 5

int a[100],top=-1;

void push()
{
    int n;
    
}

void pop()
{

}

void display()
{

}

void main()
{
    int c;
    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);

        switch (c)
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
            printf("Exiting Byee!!!\n");
            break;

        default :
            printf("Invalid choice\n");
            break;
        }
    } while (c !=4);
    
}