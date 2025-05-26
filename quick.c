// Quick Sort Algorithm

#include <stdio.h>

int partition(int* arr, int low, int high){
    int pivot = arr[low];
    int i =  low+1;

    for(int j = low+1; j <= high; j++){
        if(arr[j] < pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }

    int temp = arr[i-1];
    arr[i-1] = arr[low];
    arr[low] = temp;
    return i-1;
}

void quick(int* arr, int low, int high){
    if(low < high){
        int pi = partition(arr,low,high);

        quick(arr,low,pi-1);
        quick(arr,pi+1,high);
    }
}


void dispaly(int* arr, int n){
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main(void){
    int arr[] = {5,6,3,2,1};
    int n = 5;

    quick(arr,0,n-1);

    dispaly(arr,n);
    return 0;
}