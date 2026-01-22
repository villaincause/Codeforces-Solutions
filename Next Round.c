#include<stdio.h>
int main(){
int n, k, count=0;
scanf("%d %d", &n, &k);
int result[n];
for(int i=0; i<n; i++){
    scanf("%d", &result[i]);
}
for(int j=0; j<n; j++){
    if(result[j]>=result[k-1] && result[j]>0){
        count++;
    }
}
printf("%d", count);
return 0;
}
