char* addBinary(char* a, char* b) 
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = (len_a > len_b) ? len_a : len_b;
    char* result = (char*)malloc(max_len + 2);
    int carry = 0;
    int i = len_a - 1, j = len_b - 1, k = 0;
    while (i >= 0 || j >= 0 || carry != 0) 
    {
        int sum = carry;                            // @chiki.cpp
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        result[k++] = (sum % 2) + '0';
    }
    result[k] = '\0';
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
    return result;
}