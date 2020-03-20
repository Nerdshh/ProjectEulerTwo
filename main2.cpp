/// @author Frederick Bouchard

#include <iostream>

using namespace std;

int main() {

	int previousTerm = 1;	// stores previous term in Fibonacci sequence 
	int currentTerm = 2;	// stores current term in Fibonacci sequence
	int nextTerm = 0;		// stores next term in Fibonacci sequence
	int revolvingSum = 0;	// stores the sum of all even numbers in Fibonacci sequence < 4,000,000
	
	// loop calculates summation of even terms in Fibonacci sequence < 4,000,000
	while(nextTerm <= 4000000) {
		
		if(currentTerm <= 4000000 && currentTerm % 2 == 0) {
			
			revolvingSum += currentTerm;
		}
		
		// swaps previous, current, and next terms of Fibonacci sequence
		nextTerm = previousTerm + currentTerm;
		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}
	
	cout << revolvingSum << endl;
		
	return 0;
}

