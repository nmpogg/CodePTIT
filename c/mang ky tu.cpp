#include <stdio.h>
#include <string.h>

int isBalanced(const char* str) {
    int len = strlen(str);
    char stack[100];
    int top = -1;
    
    for (int i = 0; i < len; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '\'' || str[i] == '"') {
            stack[++top] = str[i];
        } else if (str[i] == ')') {
            if (top == -1 || stack[top] != '(') {
                return 0;
            }
            top--;
        } else if (str[i] == ']') {
            if (top == -1 || stack[top] != '[') {
                return 0;
            }
            top--;
        } else if (str[i] == '}') {
            if (top == -1 || stack[top] != '{') {
                return 0;
            }
            top--;
        } else if (str[i] == '\'') {
            if (top == -1 || stack[top] != '\'') {
                stack[++top] = '\'';
            } else {
                top--;
            }
        } else if (str[i] == '"') {
            if (top == -1 || stack[top] != '"') {
                stack[++top] = '"';
            } else {
                top--;
            }
        }
    }
    
    return top == -1;
}

int main() {
    char str[105];
    gets(str);
    
    if (isBalanced(str)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}

