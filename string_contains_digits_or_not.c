#include<stdio.h>
#include<stdbool.h>
int main(){
int n;
scanf("%d",&n);
while(n--){
char str[30];
bool flag = false;
scanf(" %[^
]s",str);
for(int i = 0; str[i]; i++){
if('0'<=str[i] && str[i]<='9')
flag = true;
}
if(flag)
printf("Yes
");
else
printf("No
");
}
}