#include<bits/stdc++.h>
using namespace std;
int main()
{

    int time, winner;
    cin >> time;
    for(int k = 1; k <= time; k++)
    {
        int n, value = INT_MIN;
        cin >> n;
        int ar[n*2];
        for(int i = 0; i < n*2; i++){
            cin >> ar[i];
            if(i > 0 && i % 2 != 0 && ar[i-1] <= 10){
                if(value < ar[i]){
                    value = ar[i];
                    winner = (i+1)/2;
                }
            }
        }
        cout << winner << endl;
    }
    return 0;
}


