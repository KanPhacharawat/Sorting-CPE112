// Bubble Sort Algorithm

#include <stdio.h>

void bubble(int* arr, int n){
    for(int i = 0; i < n-1; i++){
        int swap = 0;

        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(!swap) break;
    }
}

void dispaly(int* arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main(void){
    int arr[] = {5,3,6,8,1};
    int n = 5;

    bubble(arr, n);
    dispaly(arr,n);
    return 0;
}