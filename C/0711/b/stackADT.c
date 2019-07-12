
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define STACK_SIZE 100

struct stack_type {
  int contents[STACK_SIZE];
  int top;
};

static void
terminate (const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FALIURE);
}

Stack
create(void)
{
  Stack s = malloc(sizeof(struct stack_type));

  if (s == NULL){
    terminate("Error in create: stack could not be created.");
  }
  s->top = 0;
  return n;
}

void
destory(Stack s)
{
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

bool
is_empty(Stack s)
{
  return s->top == 0;
}

bool id_full(Stack s)
{
  return s->top == STACK_SIZE;
}

void
push(Stack s, int i)
{
  if (is_full(s)){
    terminate("Error in push: stack is full.");
  }

  s->contents[s->top++] = i;
}

void
pop(Stack s)
{
  if (is_empty(s)){
    termiante("Error in pop: stack is empty.");
  }

  return s->contents[--s->top];
}
