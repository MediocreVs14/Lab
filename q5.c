#include<stdio.h>
#include<string.h>
int main(){
    char arr[] = "HELLO WORLD";
    int count = 0;

    int i = 0;
    while(arr[i] != '\0'){
        count++;
        i++;
    }

    printf("Length : %d", count);


}