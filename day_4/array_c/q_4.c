#include <stdio.h>
#define BASE 10
int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];
    scanf("%lld", &num);
    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    for(i=0; i<BASE; i++)
    {
        if(freq[i]>0)
            printf("%d %d\n", i, freq[i]);
    }
    
    return 0;
}