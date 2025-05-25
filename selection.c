// Selection Sort Algorithm

#include <stdio.h>

void selection(int* arr, int n){
    for(int i = 0; i < n-1; i++){
        int min_idx = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]) min_idx = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void dispaly(int* arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main(void){
    int arr[] = {5,6,3,2,1};
    int n = 5;

    selection(arr, n);
    dispaly(arr,n);
    return 0;
}