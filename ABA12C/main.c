#include <stdio.h>
#include <stdlib.h>
int n,k;

int mincost(int *a,int *c,int cost,int count)
{
    int s[k],i,min;

    if(count==0)
    {
    //printf("%d\n",cost);
    return cost;
    }

	if(c[count-1]>0&&count>=1)
	{
//	printf("%d\n",c[count-1]);
	return cost+c[count-1];
	}


    min=100000;
    for(i=0;i<k;i++)
    {
        s[i]=100000;
        if(a[i]>=0)
        {
        if(count-i-1>=0)
        s[i]=mincost(a,c,cost+a[i],count-i-1);

        if(s[i]<min)
    	min=s[i];
        }
    }
   if(count>=1)
    c[count-1]=min-cost;

    return min;
}

void code()
{
    int i;
    scanf("%d%d",&n,&k);
    int a[k],c[k];
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
        c[i]=0;
    }
    int ans=mincost(a,c,0,k);
    if (ans!=100000)
    {
    printf("%d\n",ans);
    return;
    }

    printf("-1\n");
    return;

}

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        code();
    }
    return 0;
}
