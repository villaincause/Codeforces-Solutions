#include <iostream>
using namespace std;
int main(){
int n, h, k = 0, ans = 0;
cin >> n >> h;
int ar[1000];

for(int i = 0; i < n; i++){
    cin >> ar[i];
    if(ar[i] <= h){
        ans++;
    }
    else{
        ans += 2;
    }
}
cout << ans;
return 0;
}
