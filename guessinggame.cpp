#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

//Game where the user tries to guess the secret number
int main(){
	
	unsigned seed = time(0); 
	srand(seed); 
	
	int secretNumber = 1 + rand() % 1000; 
	int n; //user's guess
	int count = 0; 
	
	cout <<"Enter an integer between 1 and 1000: " << endl; 
	cin >> n; 
	
	while (n != secretNumber){
		if (n>secretNumber){
			cout << "Your guess is too high. "; 
			cout << "Enter another guess: " << endl; 
			cin >> n; 
		}
		else {
			cout << "Your guess is too low. "; 
			cout << "Enter another guess: " << endl;
			cin >> n; 
		}
		count ++;
	}
	
	cout << "Your guess of " << n << " is correct!\n"; 
	cout << "It took you " << count + 1 << " tries to guess the secret number. " << endl;
	
	return 0;
}