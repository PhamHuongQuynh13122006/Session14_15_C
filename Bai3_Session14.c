//Khai bao va gan gi tri cho mot chuoi bat ky 
//Viet chuong trinh in ra chuoi dao nguoc cua chuoi da khai bao
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "I you sureee";
    char reserve[strlen(str)+1];
    //gets(str);
    //fgets(str,15,stdin);....
    for(int i = 0; i < strlen(str); i++){
        reserve[i] = str[strlen(str)-i-1];
    }
    printf("Chuoi dao nguoc cua chuoi da khai bao la : %s",reserve);
    return 0;
}