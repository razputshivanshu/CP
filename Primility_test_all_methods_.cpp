//In this lecture we are going to learn
// 1. Primility test: To check weather a number is prime or not.


//There are three methods to check the prime number:

//1. Brute force   Time Complexity: O(n)

//2. Sqrt method    Time Complexity: O(sqrt(n))

//3. Sieve of eronthesis Time Complexity: O(n*log(log(n)))

#include<bits/stdc++.h>
using namespace std;


/*bool brute_check_prime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}

	}
	return true;

	//Time Complexity: O(n)
}*/



/*
bool sqrt_check_prime(int n){
	for(int i=2; i*i <= n;i++){
		if(n%i==0){
			return false;
		}
	}

return true;

//Time Complexity: O(sqrt(n))


// Q. Why this sqrt method will work?

// Lets suppose n=100
// It work because if we analyse deeply the pairs that are required to make 100 is:
// 1 * 100 = 100
// 2 * 50  = 100
// 3 *     = not possible
// 4 * 25  = 100
// .
// .
// .
// .
// 10*10  = 100 


// No pair will exist above 10 on one side(left side in my example).





}
*/


void sieve_check_prime(int n){

	// Time Complexity: O(n*log(log(n)))

	//In sieve what we do is, we will eliminate all the composite numbers and the remaining numbers will prime.
	//If you want to understand more briefly you can check wikipedia(sieve of eronthesis)

    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); // we have putted true in every column of array
 
    for (int p = 2; p * p <= n; p++) {
        
        if (prime[p] == true) { //now checking it is composite or not
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Printing all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main(){
	int n; cin>>n;
	bool ok;

	if(n==1){
		cout<<"1 is neither prime or composite";

	}
	else{

	//ok=brute_check_prime(n);
	//ok=sqrt_check_prime(n);
	sieve_check_prime(n);

}


// In case of sieve of eronthesis we have directly printed the numbers for better understanding.
// In first two cases you can use this bool function.
/*
if(ok){
	cout<<"YES"<<endl;

}
else{
	cout<<"NO"<<endl;
}*/
}







