#include<stdio.h>
#include<string.h>
void main(){
    int k=0;
    char l[100]=" hello  world";
    char s[100],str[100];
    int j=0,siz[100],h=0,b=0;
   
    for(int i=strlen(l)-1;i>=0;i--){
         
        if(l[i]==' '){
            if(s!=' '){
           for(int a=k-1;a>=0;a--){
               str[j]=s[a];
              j++;
           }
           str[j]=' ';
           j++;
            }
        k=0;
        }
        else{
         // printf("%c\n",l[i]);
            s[k]=l[i];
            k++;
        }
    }
    //printf("%d",j);
    if(s!=' '){
        for(int a=k-1;a>=0;a--){
               str[j]=s[a];
               j++;
           }
    }
   printf("%s",str);
   
}
