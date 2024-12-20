#include <stdbool.h>

int rev(int x, int y)
{
    if (x == 0)
        return y;
    return rev(x / 10, y * 10 + x % 10);
}
bool isPalindrome(int x)                 // @chiki.cpp
{
    if (x < 0 || (x % 10 == 0 && x != 0)) 
        return false;
    return rev(x, 0) == x;
}
