#include <iostream>
#include <vector>
using namespace std;

int isPrime(int num){
    bool flag=true;
    for (int i=2; i<num/2; i++){
        if (num%i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

void primeList(int n){
    std::vector<int> primes;
    for (int i=0; i < n; i++){
        if (isPrime(i)==1){
            primes.push_back(i);
        }
    }
    
}


