#include<stdio.h>
    int isprime(int num)
    {
        if(num<2)
        {
            return 0;
        }
        else
        {
            int n=num/2;
            for(int i=2;i<=n;i++)
            {
                if(num %i == 0)
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    int main()
    {
        int uplim,downlim, i;
        printf("\n Enter the lower limit and the upper limit of the range of numbers:");
        scanf("%d %d",&downlim,&uplim);
        for(i=downlim;i<=uplim;i++)
        {
       if(isprime(i))
       printf("%d \t ",i);
    
    }
    printf("\n");
return 0;
}