#include <stdio.h>

int main()
{
    int n,i,j,k,ct=0;
    
    scanf("%d",&n);
    int p=n;
    int q=n;
    int m=n*n;
    
    for(i=m;i>0;i=i-n)
    {
        p=n;  
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            ct++;
            if(ct==q)
            {
                p--;
                ct=0;
            }
        }
        q--;
        printf("\n");
    }

    return 0;
}
