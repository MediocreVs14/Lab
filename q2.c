#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);

    int arr[n], count = 0;
    
    printf("Enter the marks of students : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 90) count++;
    }

    printf("Number of students with > 90 marks : %d", count);

}