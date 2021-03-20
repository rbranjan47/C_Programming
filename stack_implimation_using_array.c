#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY], top=-1;
void push (int )
int pop(void)        //PROTOTYPE IS BEFORE MAIN() FUNCTION
int isFull(void)     //PROTOTYPE IS BEFORE MAIN() FUNCTION
int isEmpty(void)    //PROTOTYPE IS BEFORE MAIN() FUNCTION
int peek()           //PROTOTYPE IS BEFORE MAIN() FUNCTION
void traverse(void)   //PROTOTYPE IS BEFORE MAIN() FUNCTION
void main()
{
    int ch , item;
    while (1)
    {
        printf("1.push    \n");
        printff("2.pop    \n");
        printf("3.peek    \n");
        printf("4.traverse\n");
        printf("5.Quit    \n");

        printf("enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("enter the element ");
            scanf("%d",&item);
            push(item);
            break ;

            case 2: item =pop();  //{{{This is no arguments and with return function }}}
            if (item==0)
            {
                pritf("stack is underflow or no element in the stack \n");
            }
            else
                {
                printf("item is deleted or popped is %d \n", item);
                }
                break ;
            case 3: peek();
            break ;
            case 4: traverse ();
            break ;
            case 5: exit(0);
            default: printf("invalid input \n\n");
        }
    }
}
void push (int ele)    //it is not returning any thing
{
    if (isFull())
    {
        printf("stack is full \n");
    }
    else
        top++;
    stack[top]=ele;
    printf("Inserted element is %d",ele);
}

int isFull()
{
    if (top==CAPACITY-1)
    {
        RETURN 1;
    }
    else
    {
        return 0;
    }
}

int pop()
{
    int ele;
    if (isEmpty())
    {
        retrun 0;
    }
    else
    {
        return stack [top --];
    }
}
 int isEmpty()
 {
     if (top==-1)
     {
         return 1;
     }
     else {
        return 0;
     }
 }

 int peek()
 {
     if (isEmpty())
     {
         return 0;
     }
     else
     {
         printf("Peek value is %d",stack[top]);
     }
 }

 void traverse()
 {
     int i;
     if (isEmpty())
     {
         printf("no elements \n");
     }
     else
     {
         printf("stack elements are  \n");
         for (i=-;i<=top;i++)
         {
             printf("%d \n",stack[i]);
         }
     }
 }
