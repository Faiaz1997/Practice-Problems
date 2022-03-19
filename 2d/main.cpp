#include<iostream>
using namespace std;
#define MAXSIZE 5

int s[MAXSIZE];
int top;

void push(int value);
int pop();
int topp();
int isStackEmpty();
int isStackFull();
void display_stack();
int stackSize();

void stack_initialize()
{
	top = -1;
}

void push(int value)

{
    if(isStackFull())
	cout<<"stack is full";
     else
	{
	top++;
	s[top] = value;
	}

}

int pop()
{
        if(isStackEmpty())
	{cout<<"underflow: stack is empty";
    return NULL;
	}

    else
	{

	top--;
	return s[top+1];
	}

}

int isStackEmpty()
{
   return ( top == -1 );

}

int isStackFull()
{
       return ( top >= MAXSIZE-1);

}

int stackSize()
{
    cout<<top+1;

}

void display_stack()
{

    int i;
	for(i=top; i>=0; i--)
		cout<< "   "<<s[i];

}
int topp()
{
        return s[top];

}
int main()
{
	stack_initialize();
    int option,n, value;
    cout<<"C program to implement stack operations\n";
    do
    {
        cout<<"\n\n 1.Push an element in stack";
        cout<<"\n 2.Pop an element from stack";
        cout<<"\n 3.Display stack";
        cout<<"\n 4.Display current stack size ";
        cout<<"\n 5.Display top element ";
        cout<<"\n 6.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Insert an element in stack";
            cin>>n;
            push(n);
            break;
        case 2:
            value = pop();


            cout<<"\n Popped element is: "<<value<<endl;

            break;


        case 3:
            display_stack();
            break;
        case 4:
            stackSize();
            break;
        case 5:
            topp();
            break;
        case 6:
            return 0;
        }

    }
    while(option<=6);

    return 0;
}

