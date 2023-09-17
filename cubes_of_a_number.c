#include<stdio.h>
int main(){
    int n, ans;
    printf("Enter a number of which you want to find the cube: \n");
    scanf("%d", &n);
    ans = n*n*n;
    printf("The cube of given number is %d", ans);
    return 0;
}

