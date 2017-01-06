#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long int sum =0, min = a, max = a;
    std::vector<long int> intVec;
    intVec.push_back(a);
    intVec.push_back(b);
    intVec.push_back(c);
    intVec.push_back(d);
    intVec.push_back(e);
    
    for (int i= 0; i < 5; i++) {
        if (intVec[i] < min) min = intVec[i];
        if (intVec[i] > max ) max = intVec[i];
        sum += intVec[i];
    }
    cout << sum-max << " " << sum-min;
    
    return 0;
}