#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {     char u[10];
        scanf("%s",&u);
        if(u[1]=='+')
        {
          x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d",x);
}
