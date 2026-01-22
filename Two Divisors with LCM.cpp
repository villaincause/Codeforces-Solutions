#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int a, b, flag = 0, ans = 0, m = 1, temp;
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
                if(ans > b)
                {
                    flag = 1;
                    printf("%d\n", ans);
                    break;
                }
                else if(ans == b)
                {
                    flag = 1;
                    temp = b/a;
                    printf("%d\n", ans * temp);
                    break;
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
