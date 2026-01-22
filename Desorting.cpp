#include<iostream>
using namespace std;

int sorted(int ar[], int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    if(ar[n-1] < ar[n-2])
    {
        return 0;
    }
    return sorted(ar, n-1);
}


int main()
{
    int time;
    cin >> time;
    for(int k = 1; k <= time; k++)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int x = sizeof(ar) / sizeof(ar[0]);
        int check = sorted(ar, x);
        if(check == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int diff = INT_MAX, ele1, ele2;
            for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n; j++)
                {
                    if(abs(ar[i] - ar[j]) < diff)
                    {
                        diff = abs(ar[i] - ar[j]);
                        ele1 = i;
                        ele2 = j;
                    }
                }
            }
            for(int l = 1; l = l; l++)
            {
                if(ar[ele1] <= ar[ele2])
                {
                    ar[ele1]++;
                    ar[ele2]--;
                    if(ar[ele1] > ar[ele2])
                    {
                        cout << l << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;

}
