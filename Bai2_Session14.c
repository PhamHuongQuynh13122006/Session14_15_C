//Khai bao va gan gia tri cho 1 chuoi bat ky
//In ra tung ky tu trong chuoi da khai bao 
//Moi ky tu deu cach nhau 1 dau cach
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "You you you";
    for(int i = 0; i < strlen(str); i++){
        printf("%c",str[i]);
    }
    return 0;
}

