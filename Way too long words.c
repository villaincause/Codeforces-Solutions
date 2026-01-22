#include<stdio.h>
#include<string.h>
int main(){
    int time;
    scanf("%d", &time);
    for(int i = 1; i<=time; i++){
char s[100];
scanf("%s", s);
int length = strlen(s);
if(length>10){
int middle = length - 2;
printf("%c%d%c\n", s[0], middle, s[length-1]);
}
else{
puts(s);
}
    }
return 0;
}
