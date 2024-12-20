int mySqrt(int x) 
{
    if (x == 0) 
        return 0;
    if (x == 1) 
        return 1;
    if (x <= 3) 
        return 1;
    if (x >= 4 && x < 9) 
        return 2;
    if (x >= 9 && x < 16) 
        return 3;
    if (x >= 16 && x < 25) 
        return 4;
                                    // @chiki.cpp
    int damn = 1;
    int weirdo = x / 2;
    int nerd = 0;

    while (damn <= weirdo) 
    {
        int geek = damn + (weirdo - damn) / 2;

        if (geek <= x / geek) 
        {
            nerd = geek;
            damn = geek + 1;
        } 
        else 
            weirdo = geek - 1;
    }
    return nerd;
}
