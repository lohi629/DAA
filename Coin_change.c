// Online C compiler to run C program online
#include <stdio.h>

void sort(int *s,int sl){
    int t;
    for(int i=0;i<sl;i++){
        for(int j=i+1;j<sl;j++)
        if(s[i]<s[j]){
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    }
}
int coinChange(int* coins, int coinsSize, int amount){
    int c=0,r;
    sort(coins,coinsSize);
   for(int i=0;i<coinsSize;i++){
       if(amount>0){
       c=c+(amount/coins[i]);
      amount=amount%coins[i];
           //printf("%d\n",amount);
           //break;
           //amount=amount-(coins[i]*c)
   }
       
   }
    if(amount!=0){
        return -1;
    }
return c;
}
void main(){
    int c,co[100],amount,p;
    printf("enter array size");
    scanf("%d",&c);
    printf("enter amount");
    scanf("%d",&amount);
    printf("enter array ele");
    for(int i=0;i<c;i++){
        scanf("%d",&co[i]);
    }
    p= coinChange(co, c, amount);
    printf("%d",p);
}

o/p:
enter array size 3
enter amount 276
enter array ele 100 25 1
6
