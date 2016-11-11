#include<iostream>
#include <vector>

using namespace std;
main()
{
   int n, count=2, c;

   cout << "Enter the number of prime numbers required " << endl;
   cin >> n;
   
   if ( n >= 1 )
   {
      cout << "First" << n << " prime numbers are" <<endl;
	  cout << 2 <<;
   }
   
   vector<int> primes;
   primes.push_back(2);
   
   
   vector<int>::iterator iter;
   int i=3;
  
	for(i = 3; count <= n ; i++) 
	   {
			for(iter = primes.begin(); iter != primes.end(); iter++) 	
			{  			
			   if( i % (*iter) == 0) 
   					break;
		   	}
			
			if(iter == primes.end()) 
				 {
	    			primes.push_back(i);
	    			cout << i << endl;
					count++;
				}
	   }         
 
   return 0;
}
