#include "primenumber.h"

int primenumber(int number)
{
    int i,count=0;
    if(number<0)
        return -1;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
            count++;
    }
    if(count==2)
        return 1;
    else
        return 0;
}
