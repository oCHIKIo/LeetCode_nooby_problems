int climbStairs(int n) 
{
    int damn;
    int weirdo;
    int nerd;
    int x;
                    // @chiki.cpp
    if (n == 0)
        return 0;
    if (n == 2)
        return 2;
    if (n == 1)
        return 1;
    damn = 1;
    weirdo = 2;
    nerd = 0;
    x = 3;
    while (x <= n)
    {
        nerd = weirdo + damn;
        damn = weirdo;
        weirdo = nerd;
        x++;
    }
    return nerd;
}