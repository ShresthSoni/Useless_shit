#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int i;

    while(1)
    {
        char c[10000];
        scanf("%s",c);

        if(c[0]=='0')
        break;

        long long int n=strlen(c);
        long long int a,b,d;

        for(i=n-1;i>=0;i--)
        {
            if(c[i]=='0'&&c[i-1]!='1'&&c[i-1]!='2')
            {
                printf("0\n");
                break;
            }

			if(n==1)
			{
				printf("1\n");
				break;
			}

            if(i==n-1)
            {
                a=b=1;
                continue;
            }

            if(c[i]=='0')
            {
                if(i==1)
                {
                    printf("%lld\n",a);
                    break;
                }
                i=i-1;
                continue;
            }


            long long int n1=10*(c[i]-'0')+c[i+1]-'0';

            if(n1<=26&&c[i+2]!='0'&&c[i+1]!='0')
            {
                d=b;
                b=a;
                a=a+d;
            }
            else
            b=a;

            if(i==0)
            {
                printf("%lld\n",a);
            }

        }
    }
    return 0;
}
