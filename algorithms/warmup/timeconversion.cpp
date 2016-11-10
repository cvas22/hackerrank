#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    string time;
    cin >> time;
    
    int len = time.length();
    //cout << len;
    
    if(len == 10) {
    int hours = time[1] - 48;
    hours +=  (time[0] - 48 ) * 10;
    
    int minutes = time[4] - 48;
    minutes +=  (time[3] - 48 ) * 10;
    
    int seconds = time[7] - 48;
    seconds +=  (time[6] - 48 ) * 10;
    
    if(hours < 12 && (time[8] == 'P' || time[8] == 'p')) {
       hours += 12; 
    }    
    
    if(hours == 12 && (time[8] == 'A' || time[8] == 'a')) {
        hours = 0;
    }
    cout << setw(2) << setfill('0') << hours << ":" <<setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds;
    }
    return 0;
}
