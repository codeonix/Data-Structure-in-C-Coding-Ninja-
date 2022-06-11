#include<stdio.h>

int main(){
    int marks1,marks2,marks3;
    char grade ;
    
    scanf("%c%d%d%d",&grade,&marks1,&marks2 , &marks3);
    printf("%c\n",grade);
    printf("%d",(marks1+marks2+marks3)/3);
    
}
