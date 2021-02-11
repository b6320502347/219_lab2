#include<stdio.h>
int main(){
    char name;
    int num;
    scanf("%c %d",&name,&num);
    if(num>=1&&num<=31){
    if(name>=83&&name<=90){
        if(num%2==1&&num%10==5)
         printf("%c(T_T)/",92);
        else if(num%2==1)
            printf("(T_T)");
        else if(num%2==0)
            printf("{x_x}");
    }
    else if(name>=74){
        if(num%2==1&&num%10==5)
         printf("%c(*0*)/",92);
        else if(num%2==1)
            printf("(*0*)");
        else if(num%2==0)
            printf("{*v*}");
    }
    else if(name>=65){
        if(num%2==1&&num%10==5)
         printf("%c(^_^)/",92);
        else if(num%2==1)
            printf("(^_^)");
        else if(num%2==0)
            printf("{@_@}");
    }
}
}
