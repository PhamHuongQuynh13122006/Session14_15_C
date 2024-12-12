//Khai bao va gan gia tri cho mot chuoi  bat ky 
//Viet chuong trinh yeu cau nguoi dung nhap vao 1 ky tu bat ky
//In ra so lan xuat hien cua ky tu do trong chuoi da khai bao
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello hello";
    char digit;
    int count = 0;
    printf("Nhap vao 1 ky tu :");
    scanf("%c",&digit);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == digit){
            count++;
        }
    }
    printf("So lan xuat hien cua ky tu trong chuoi la : %d",count);
    return 0;
}

