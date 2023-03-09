#include<stdio.h>
void main()
{
    int m;
    printf("enter m value");
    scanf("%d",&m);
    if(m%3==0 && m%5==0)
    {
        printf("Good number");
    }
    else if(m%3==0 && m%5!=0){
        printf("bad number");
        
    }
    else if(m%5==0 && m%3!=0){
        printf("poor number");
    }
    else{
        printf("-1");
    }
}

