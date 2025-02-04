#include<iostream>
using namespace std;
int main(){
int n, x=0;
cin >> n;
for(int i=1; i<=n; i++){
    string str;
    cin >> str;
    if(str == "X++" || str == "++X"){
        x++;
    }
    else if(str == "X--" || str == "--X"){
        x--;
    }
}
cout << x;
return 0;
}
