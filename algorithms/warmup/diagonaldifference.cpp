#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



enum DiagnalType {
    PRIMARY = 0,
    SECONDARY
};


int findSum(vector< vector<int> > array, int M, DiagnalType diagonal) {
    
    if(array.empty() || M <= 0) {
        return 0;
    }
    
    int sum = 0;
    
    if(diagonal == PRIMARY) {
        for (int i=0; i< M; i++)
            for(int j=0;j< M; j++) {
              if( i==j )
                  sum += array[i][j];
        }
    }
        
    if (diagonal == SECONDARY) {
        for (int i=0; i <M; i++)
            for(int j=0;j < M; j++) {
              if( i + j == M - 1)
                  sum += array[i][j];
        }
     }
     return sum;   
}


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    DiagnalType diagonal;
    diagonal = PRIMARY;
    int sumP = findSum(a, n, diagonal);
    
    diagonal = SECONDARY;
    int sumS = findSum(a, n, diagonal);
   
    cout << abs (sumP - sumS);
    return 0;
}
