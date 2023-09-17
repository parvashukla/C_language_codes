#include<stdio.h>
int main(){
    int a;
    printf("Enter an integer: \n");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("The given integer is divisible by 2");
    }
    else{
        printf("The given integer is not divisible by 2");
    };
    return 0;

}
