#include <bits/stdc++.h>
using namespace std;
int main(){
int n, ar[3] = {0, 0, 0}, temp, i, flag = 0;
cin >> n;
while(n--){
    for(i = 0; i < 3; i++){
        cin >> temp;
        ar[i] += temp;
    }
}
for(i = 0; i < 3; i++){
    if(ar[i] != 0){
        flag = 1;
        break;
    }
}
if(flag == 0){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
return 0;
}
