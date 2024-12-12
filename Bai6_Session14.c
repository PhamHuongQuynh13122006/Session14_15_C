//Khai bao va gan gi tri cho mot chuoi bat ky 
//Viet chuong trinh yeu cau nguoi dung dem so ky tu la chu cai
//Co trong chuoi va in ra man hinh
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[] = "I you sureee";
    //gets(str);
    //fgets(str,14,stdin);....
    int count = 0;
    //index = 0;
    for(int i = 0; i < strlen(str); i++){
        if(isalpha(str[i])){
            count++;
        }
        /*if(isdigit(str[i]) || str[i] == ' '){
        index = 0;
        }else{
        index = 1;
        count++;
        }*/
    }
    printf("So ky tu la chu cai : %d",count);
                                     // count - 1
    return 0;
}