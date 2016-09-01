#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int *a;

void code()
{

    long int m,n,i,j;
    scanf("%ld%ld",&m,&n);

    int b[n-m+1];
    for(i=0;i<n-m+1;i++)
    {
        b[i]=1;
    }

    for(i=2;i<sqrt(n);i++)
    {
        if(a[i])
        {
            long int x;
            x=(m/i)*i;
            for(j=x-m;j<n-m+1;j=j+i)
            {
            	if(j>=0&&j+m!=i)
                b[j]=0;
            }
        }
    }

    for(i=0;i<n-m+1;i++)
    {
    	if(b[i]&&i+m!=1)
        printf("%ld\n",i+m);
    }


    return;
}

int main()
{

    long int t,i,j;

    a=malloc(sizeof(long int)*31623);



    for(i=2;i<31623;i++)
    {
        a[i]=1;
    }

    for(i=2;i<31623;i++)
    {
        if(a[i])
        for(j=i;i*j<31623;j++)
        {
            a[i*j]=0;
        }
    }

    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        code();
    }
    return 0;
}
