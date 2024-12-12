#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int h = 0;
    char result[strlen(str) + 1];
    printf("Nhap chuoi ky tu bat ky :");
    gets(str);
    printf("Nhap ky tu can xoa :");
    char digit; 
    scanf("%c",&digit);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] != digit){
            result[h++] = str[i];
        }
    }
    result[h] = '\0';
    printf("Chuoi sau khi xoa ky tu '%c' : %s", digit, result);
    return 0;
}

