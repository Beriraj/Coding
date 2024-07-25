/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int s,sum;
    printf("Enter the number: ");
    scanf("%d",&s);
    int f0=0,f1=1;
    if(s==1)
    {
        printf("%d",s);
    }
    else
    {
    for(int i=0;i<=s;i++)
    {
        sum=f0+f1;
        f0=f1;
        f1=sum;
        if(sum>=s)
        {
            if(sum==s)
            {
                printf("%d  ",f1);
                break;
            }
            printf("%d  ",f0);
            s=s-f0;
            f0=0;
            f1=1;
            sum=0;
            i=0;
        }
    }
    }
    return 0;
    
}