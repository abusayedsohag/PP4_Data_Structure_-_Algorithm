#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Maximum number of elements that can be stored
int top = -1, stack[MAX];
void push();
void pop();
void display();
int main()
{
    int ch;
    while(1) // Infinite loop, will end when choice is 4
    {
        printf("\n*** Stack Menu ***");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice (1-4): ");
        // Input validation: ensure only integers are accepted
        if(scanf("%d", &ch) != 1) {
            printf("\nInvalid input! Please enter a number between 1 and 4.\n");
            // Clear the input buffer
            while(getchar() != '\n');
            continue;
        }
        // Handle the user's choice using switch-case
        switch(ch)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: printf("\nExiting the program. Goodbye!\n");
                exit(0);
            default: printf("\nWrong Choice! Please select a number between 1 and 4.");
        }
    }
    return 0;
}

void push()
{
    int val;
    if(top == MAX - 1)
    {
        printf("\nStack is full!");
    }
    else
    {
        printf("\nEnter element to push: ");
        if(scanf("%d", &val) != 1) {
            printf("\nInvalid input! Please enter an integer.");
            // Clear the input buffer
            while(getchar() != '\n');
            return;
        }
        top = top + 1;
        stack[top] = val;
        printf("\nElement %d pushed to the stack.", val);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nDeleted element is %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nStack elements are:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
