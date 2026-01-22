#include<iostream>
using namespace std;
int main(){
int x, answer = 0;
cin >> x;
if(x%5 == 0){
    printf("%d", x/5);
}
else{
    printf("%d", (x/5)+1);
}
return 0;
}
