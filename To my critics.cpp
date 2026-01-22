#include<bits/stdc++.h>
using namespace std;
int main()
{

    int time, winner;
    cin >> time;
    for(int k = 1; k <= time; k++)
    {
        int ar[3], cnt = 0;
        for(int i = 0; i < 3; i++){
        cin >> ar[i];
        }
        if(ar[0] + ar[1] >= 10){
        cnt++;
        }
        else if(ar[1] + ar[2] >= 10){
        cnt++;
        }
        else if(ar[0] + ar[2] >= 10){
        cnt++;
        }
        if(cnt == 0){
        cout << "NO" << endl;
        }
        else{
        cout << "YES" << endl;
        }
    }
    return 0;
}
