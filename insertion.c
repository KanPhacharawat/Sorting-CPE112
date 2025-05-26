// Insertion Sort Algorithm

#include <stdio.h>

void insertion(int* arr, int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j--];
        }
        arr[j+1] = key;
    }
}

void dispaly(int* arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main(void){
    int arr[] = {5,6,3,2,1};
    int n = 5;

    insertion(arr, n);
    dispaly(arr,n);
    return 0;
}