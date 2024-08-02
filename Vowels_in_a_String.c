#include<stdio.h>
int main(){
char str[30];
scanf("%[^
]s",str);
char a;
scanf(" %c",&a);
int k = 1;
for(int i = 0 ; str[i] ; i++){
if(str[i] == a){
printf("True
%d",i);
k = 0;
break;
}
}
if(k)
printf("False");
}