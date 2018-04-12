#include <stdio.h>

int RevNum(int num)
{
    int NewNum=0,r;
    while(num>0)
    {
        r=num%10;
        NewNum=(NewNum*10)+r;
        num=num/10;
    }
    return NewNum;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    
    while(n>0)
    {
        n++;
        if(RevNum(n)==n)
        {
            printf("%d",n);
            return;
        }
    }
}
