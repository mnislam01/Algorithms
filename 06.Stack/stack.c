#include <stdio.h>
#define STACK_MAX 100

typedef struct
{
  /* data */
  int top;
  int data[STACK_MAX];
} Stack;

int push(Stack* s, int data);
int pop(Stack *s);


int main(void){
    Stack my_stack;
    int item;

    my_stack.top = 0;
    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

}

int push(Stack* s, int data){
  if (s->top < STACK_MAX){
    s->data[s->top] = data;
    s->top = s->top + 1;
  } else
  {
    printf("Stack is full!");
  }
}

int pop(Stack *s){
  int item;
  if (s->top == 0){
    printf("Stack is empty!");
    return -1;
  } else
  {
    s->top = s->top - 1;
    item = s->data[s->top];
  }
  return item;
}