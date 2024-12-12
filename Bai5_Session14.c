//Khai bao va gan gia tri cho mot chuoi bat ky
//Viet chuong trinh yeu cau nguoi dung dem so tu trong chuoi 
//Moi tu se cach nhau boi dau cach
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello hello";
    //char str[200]
    //printf("Nhap mot chuoi ky tu bat ky :");
    //fgets(str,200,stdin);
    //fputs(str,stdout);
    int count = 1;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("So tu trong chuoi la : %d",count);
    return 0;
}

