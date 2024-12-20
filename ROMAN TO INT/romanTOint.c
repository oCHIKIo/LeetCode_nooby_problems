int romanNum(char x)
{
    if (x == 'I')
        return 1;
    else if (x == 'V')
        return 5;
    else if (x == 'X')
        return 10;
    else if (x == 'L')
        return 50;
    else if (x == 'C')
        return 100;
    else if (x == 'D')
        return 500;
    else if (x == 'M')
        return 1000;
    else 
        return 0;
}

int converter(char *str, int value)
{
    int counter;
    int current_value;
    int next_value;

    counter = 0;
    if (!str[counter])
        return 0;
    while (str[counter])
    {
        current_value = romanNum(str[counter]);
        next_value = romanNum(str[counter + 1]);
        if (current_value < next_value)
            value -= current_value;
        else 
            value += current_value;
        counter++;
    }
    return value;
}

int romanToInt(char* s) 
{
    return converter(s, 0);
}
