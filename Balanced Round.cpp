#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        int pro, gap, total = 1, ans =1;
        cin >> pro;
        cin >> gap;
        int diff[pro];
        for(int j = 0; j < pro; j++){
            cin >> diff[j];
        }
        sort(diff, diff+pro);
        for(int j = 1; j < pro; j++){
            if(diff[j] - diff[j-1] > gap){
                total = 1;
            }
            else{
                total++;
            }
            ans = max(total, ans);
        }
        cout << pro - ans << endl;
    }
    return 0;
}
