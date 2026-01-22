#include <iostream>
using namespace std;
int divisable(int a, int b, int ans)
{
    int flag = 1, i;
    for(i = a+1; i < b; i++)
    {
        if(ans % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int a, b, flag = 0, ans = 0, m = 2;
        scanf("%d %d", &a, &b);
        while(flag == 0)
        {
            ans = b * m;
            if(ans % a != 0)
            {
                m++;
            }
            else
            {
                flag = divisable(a, b, ans);
                if(flag == 1)
                {
                    printf("%d\n", ans);
                }
                else
                {
                    m++;
                }
            }
        }
    }
    return 0;
}
