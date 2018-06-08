#include <stdio.h>
#include <iostream>
int main()
{
    unsigned long long max;
    while(scanf("%lld",&max)!=EOF)
    {
        unsigned long long count=0,tmp=0,tmp2=0;
        while(scanf("%lld",&tmp)!=EOF)
    {
        if(tmp==0)
        {    if(tmp2>0)
            count++;


            break;
        }
        if(tmp+tmp2<max)
            tmp2=tmp2+tmp;
        else if(tmp+tmp2==max)
        {
            tmp2=0;
            count++;
        }
        else{
            tmp2=0;
            count++;
            tmp2=tmp;
        }


    }
     printf("%lld\n",count);

    }
}
