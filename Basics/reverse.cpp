#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    
    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}

void printArray(int arr[], int size){
    for (int i=0; i < size; i++){
        cout << arr[i] << " ";  
    }
}


int main(){
    
    
    int arr[] = {1,2,3,4,5};
    printArray(arr, 5);
    reverse(arr, 0, 4);
    cout << endl;
    printArray(arr, 5);
    cout << arr << endl;
}