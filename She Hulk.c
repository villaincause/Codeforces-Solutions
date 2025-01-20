#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
while(n%2!=0)
{
    for(int i=2; i<=n; i+=2)
    {
        printf("I hate that I love that ");
    }
    printf("I hate it");
break;
}
while(n%2==0)
{
    printf("I hate that ");
    for(int i=3; i<=n; i+=2)
    {
        printf("I love that I hate that ");

    }
    printf("I love it");
break;
}
return 0;
}
