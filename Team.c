#include<stdio.h>
int main()
{
    int problem, frnd[3], count=0;
    scanf("%d", &problem);
    for(int i=1; i<=problem; i++)
    {
        int scount=0;
        for(int j=0; j<3; j++)
        {
            scanf("%d", &frnd[j]);
            if(frnd[j]==1)
            {
                scount++;
            }
        }
        if(scount>=2)
            {
                count++;
            }
    }
    printf("%d", count);
    return 0;
}
