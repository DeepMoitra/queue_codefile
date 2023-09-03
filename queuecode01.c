#include <stdio.h>

#define MAX 6
int queue[MAX];
int front = -1, rear = -1;

void enqueu(int n)
{
    if (rear == MAX - 1)
    {
        printf("Queue overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = n;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = n;
    }
}

void dequeu()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue underflow\n");
    }
    else if (front == rear)
    {
        front == rear == -1;
    }
    else
    {
        int g = queue[front];
        front = front + 1;
        printf("%d \n", g);
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d \n", queue[i]);
    }
}

int main()
{

    enqueu(4);
    enqueu(7);
    enqueu(4);
    display();
    dequeu();
    display();
    return 0;
}