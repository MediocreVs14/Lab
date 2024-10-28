#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    int maxi = arr[0], mini = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi) maxi = arr[i];
        if(arr[i] < mini) mini = arr[i];
    }

    printf("Max : %d and Min : %d", maxi, mini);
}