#include<stdio.h>
void namaste();
void bonjour();

int main(){
    char ch;
    printf("Enter I for Indian and F for French: ");
    scanf("%c", &ch);
    if(ch == 'i'){
        namaste();
    }
    else
    {
        bonjour();
    }
        return 0;
    }
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("bonjour");
}
