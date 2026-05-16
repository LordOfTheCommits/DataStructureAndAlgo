#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isValid(char* s) {
    int len = strlen(s);
    char stack[len];
    int top = -1;
    for (int i = 0; i < len; i++) {
        int c=s[i];
            if (c == '(' || c == '{' || c == '[') {
           
            stack[++top] = c;
        }
        else{
            if (top==-1) return false;
            char topChar = stack[top--];
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
            
    }
}
int main() {
    char input[100];   // buffer for user input
    printf("Enter a string of brackets: ");
    scanf("%99s", input);   // read input safely

    if (isValid(input)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}