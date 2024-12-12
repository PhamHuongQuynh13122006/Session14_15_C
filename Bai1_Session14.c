//Viet chuong trinh yeu cau nguoi dung nhap chuoi bat ky, 
//in ra chuoi vua nhap va do dai chuoi do 
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input string : ");
    //gets(str);
    fgets(str,10,stdin);
    //fgets(str,sizeof(str),stdin);
    printf("String just entered : %s",str);
    printf("Lenght string : %d",strlen(str));
    return 0;
}

