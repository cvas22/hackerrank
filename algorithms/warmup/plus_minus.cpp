#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    double zeroCount=0, posCount = 0, negCount = 0;
    vector<int>::iterator iter;
    
    for(iter = arr.begin(); iter != arr.end(); iter ++) {
        if(*iter == 0)
            zeroCount++;
        if(*iter > 0)
            posCount++;
       if(*iter < 0)
            negCount++;
    }
    cout << posCount/n << endl << negCount/n << endl << zeroCount/n;
    return 0;
}