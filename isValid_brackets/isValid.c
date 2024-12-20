#include <stdbool.h>

bool isValid(char* s) 
{

    char* stack = (char*)malloc(strlen(s) + 1); // @chiki.cpp
    int top = -1;

    if (!s)
        return false;
    int i = 0; 
    while (s[i] != '\0') 
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[++top] = s[i]; 
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (top == -1)
            {
                free(stack); 
                return false;
            }
            char topChar = stack[top--]; 
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == '}' && topChar != '{') ||
                (s[i] == ']' && topChar != '['))
            {
                free(stack); 
                return false;
            }
        }
        i++; 
    }
    bool result = (top == -1);
    free(stack); 
    return result;
}