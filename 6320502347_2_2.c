#include<stdio.h>
int main(){
    char pro;
    float time;
    scanf("%c %f",&pro,&time);
    int x=time*100;
    int sec=x%100;
    int min=(x-sec)/100;
    switch(pro){
    case 'A': if(time>200){
                        printf("%.2f",199+((min-200)*3)+(sec*0.05)); break;
                    }
                    else  printf("199"); break;
    case 'B': if(time>400){
                        printf("%.2f",299+((min-400)*2)+(sec*0.05*2/3)); break;
                    }
                    else  printf("299"); break;
    }

}
