#include <iostream>

using namespace std; 
  
int primes[1000], index = 0; 
  
void totalPrimeNum(int n) 
{ 
    for (int i = 2, j = 0; i <= n + 1; i++) {
            for (j = 2; j < i; j++)
		   if (i % j == 0) 
                	break;
    	    if (i == j)
            	primes[index++] = i; 
        }

    // for (int i = 0; i < index; i++)
    //	    cout << primes[i] << endl;
} 
  
bool specialPrimeNumbers(int n) 
{ 
    totalPrimeNum(n);
    int count = 0;

    for (int i = 0; i < index; i++)
        for (int j = 0; j < i - 1; j++)
            if (primes[j] + primes[j + 1] + 1 == primes[i]) { 
		cout << primes[i] << endl;
                break; 
            } 
  
    return false; 
} 
  
// Driver function 
int main() 
{ 
    int n, k;

    cout << "Enter last number to check for prime numbers: ";
    cin >> n;
    
    specialPrimeNumbers(n); 
    return 0; 
} 
