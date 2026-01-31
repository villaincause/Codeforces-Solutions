#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int ar[n];
for(int i = 0; i < n; i++){
    cin >> ar[i];
}
float ans = accumulate(ar, ar + n, 0);

cout << ans / n;

return 0;
}
