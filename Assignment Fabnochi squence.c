#include<stdio.h>
int main()
{
    int t,a=0,b=1,e,c;
    printf("\n Enter the limit");
    scanf("%d",&t);
    for(e=1;e<=t;e++)
    {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
    }
}
