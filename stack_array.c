#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
struct StackSq {
    ElemType *stack;
    int top;
    int MaxSize;
};

void againMalloc(struct StackSq *S)
{
    ElemType *p = realloc(S -> stack, 2 * S -> MaxSize * sizeof(ElemType));
    if(!p) {
        printf("Out of strorage space!\n");
        exit(1);
    }
    S -> stack = p;
    S -> MaxSize = 2 * S -> MaxSize;
    printf("The storage space has been expanded to the current 2 times!\n");
}

void InitStack(struct StackSq *S, int ms)
{
    if (ms < 0) {
        printf("The value of ms is illegal!\n");
        exit(1);
    }
    S -> MaxSize = ms;
    S -> stack = malloc(ms * sizeof(ElemType));
    if (!S -> stack) {
        printf("Dynamic storage allocation failed!\n");
        exit(1);
    }
    S -> top = -1;
}

void Push(struct StackSq *S, ElemType x)
{
    if (S -> top == S -> MaxSize -1) 
        againMalloc(S);
    S -> top++;
    S -> stack[S -> top] = x;
}

ElemType Pop(struct StackSq *S)
{
    if (S -> top == -1) {
        printf("Empty stack, no elements popped!\n");
        exit(1);
    }
    S -> top--;
    return S -> stack[S -> top];
}

ElemType Peek(struct StackSq *S)
{
    if (S -> top == -1) {
        printf("Empty stack, no elements!\n");
        exit(1);
    }
    return S -> stack[S -> top];
}

int EmptyStack(struct StackSq *S)
{
    if (S -> top == -1) 
        return 1;
    else
        return 0;
}

void ClearStack(struct StackSq *S)
{
    if (S -> stack) {
        free(S -> stack);
        S -> stack = 0;
        S -> top == -1;
        S -> MaxSize = 0;
    }
}

void main()
{


    struct StackSq s;
    int a[8] = {3, 8, 5, 17, 9, 30, 15, 22};
    int i;
    InitStack(&s, 5);
    for (i =0; i < 8; i++)
        Push(&s, a[i]);
    printf("%d ", Pop(&s));
    printf("%d \n", Pop(&s));
    Push(&s, 68);
    printf("%d ", Peek(&s));
    printf("%d \n", Pop(&s));
    while (!EmptyStack(&s))
        printf("%d ", Pop(&s));
    printf("\n");
    ClearStack(&s);
}



















































































