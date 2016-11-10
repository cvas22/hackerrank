#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int b = n;
    
    for (int i = n; i > 0; i--) {
        for(int j = i -1 ; j > 0; j--)
            cout << " ";
        for(int k = n-i; k >= 0 ; k--)
            cout << "#";
       cout <<  endl;
    }    
    return 0;
}
