#include <stdio.h>
#include <stdlib.h>

#define MAX 6
int cirqu[MAX];
int front = -1, rear = -1;

void cirenq(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        cirqu[rear] = x;
    }
    else if ((rear + 1) % MAX == front)
    {
        printf("Queue is full\n");
    }

    else
    {
        rear = ((rear + 1) % MAX);
        cirqu[rear] = x;
    }
}

void cirdeq()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("Dequeued element is %d\n", cirqu[front]);
        front = ((front + 1) % MAX);
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("cIRCULAR QUEUE ELEMENTS ARE\n");
        while (i != rear)
        {

            printf("%d \n", cirqu[i]);
            i = ((i + 1) % MAX);
        }
        printf("%d\n", cirqu[rear]);
    }
}

int main()
{

    cirenq(5);
    cirenq(87);
    cirenq(4);
    cirenq(12);
    display();
    cirdeq();
    display();
    cirdeq();
    display();
    return 0;
}