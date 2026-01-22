#include<iostream>
using namespace std;
int main()
{
int k, n, w, borrow, money = 0;
scanf("%d %d %d", &k, &n, &w);
for(int i = 1; i <= w; i++){
 money += k*i;
}
if(money > n){
printf("%d", money-n);
}
else{
    printf("0");
}
return 0;
}
