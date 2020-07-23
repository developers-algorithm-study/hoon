#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Stack
{
	int* arr;
	int top;
} Stack;

void init(Stack* stack, int max)
{
	stack->arr = (int*)malloc(sizeof(int) * max);
	stack->top = -1;
}

int empty(Stack* stack)
{
	return stack->top == -1;
}

int size(Stack* stack)
{
	return stack->top + 1;
}

int full(Stack* stack, int max)
{
	return stack->top + 1 >= max;
}

void push(Stack* stack, int val, int max)
{
	if (full(stack, max))
		return;

	stack->arr[++(stack->top)] = val;
}

int pop(Stack* stack)
{
	if (empty(stack))
		return -1;

	return stack->arr[(stack->top--)];
}

int top(Stack* stack)
{
	if (empty(stack))
		return -1;

	return stack->arr[stack->top];
}

int main()
{
	int val = 0;
	int max = 0;
	char cmd[6];
	Stack stack;

	scanf_s("%d", &max);
	fgetc(stdin);
	
	init(&stack, max);

	for (int i = 0; i < max; i++)
	{
		scanf_s("%s", cmd, 6);
		fgetc(stdin);

		if (!strcmp(cmd, "push"))
		{
			scanf_s("%d", &val);
			fgetc(stdin);

			push(&stack, val, max);
		}
		else if (!strcmp(cmd, "pop"))
		{
			printf("%d\n", pop(&stack));
		}
		else if (!strcmp(cmd, "empty"))
		{
			printf("%d\n", empty(&stack));
		}
		else if (!strcmp(cmd, "size"))
		{
			printf("%d\n", size(&stack));
		}
		else if (!strcmp(cmd, "top"))
		{
			printf("%d\n", top(&stack));
		}
	}
}