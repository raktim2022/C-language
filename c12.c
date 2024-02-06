// Write program to evaluate an user given Postfix expression.

#include <stdio.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
int pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}
int main(){
    char exp[100];
    char *e;
    int n1, n2, n3, num;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    while (*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
                case '+':
                {
                    n3=n1+n2;
                    break;
                }
                case '-':
                {
                    n3 = n1 - n2;
                    break;
                }
                case '*':
                {
                    n3 = n1 * n2;
                    break;
                }
                case '/':
                {
                    n3 = n1 / n2;
                    break;
                }
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n", exp, pop());
    return 0;
}