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
    int n= 26;
    vector<int> h(n);
    
    map<char,int> mapping;
    char start = 'a';
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
       mapping[start++] = h[h_i];
    }

    string word;
    cin >> word;
    int max = 0;
    
    int len = word.size();
    
    for (int i=0;i < len; i++)
        {
        if (mapping[word[i]] > max)
            max = mapping[word[i]];
    }

    cout << max * len << endl;
    return 0;
}
