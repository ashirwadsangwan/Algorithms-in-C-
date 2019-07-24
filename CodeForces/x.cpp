#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(const int array[], int n)
{   
    for (int i = 0; i < n - 1; i++)      
    {         
        if (array[i] != array[i + 1])
            return true;
    }
    return false;
}


int main(){
    int tests;
    cin >> tests >> endl;
    for (int i=0; i<tests; i++){
        int n, arr[n], sum = 0;
        for (int j=0; j<n; j++){
            cin >> arr*;
            sum+=arr[j];
        }
        float mean = sum/n;
        int mean1 = sum/n;

        if (mean > mean1){
            cout << "Impossible";
        }

        if (check(arr, n)==0){
            cout << 1;
        }else{
            cout << mean1;
        }
    }
}