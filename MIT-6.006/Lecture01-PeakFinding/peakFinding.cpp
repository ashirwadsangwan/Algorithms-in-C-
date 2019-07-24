#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peak(int arr[]){

    int peaks[arr.length()];
    if (arr[0]>arr[1]){
        peaks.push_back(0);
    }
    for (int i=1; i<arr.length()-1; i++){
        if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]{
            peaks.push_back(i);
        }
    }
    if (arr[-1]>arr[-2]){
        peaks.push_back(arr.length()-1);
    }

}

int main(){
    int arr[];
    arr = [1,0,2,3,2,1,5,2,6];
    cout << peak(arr) << endl;
}