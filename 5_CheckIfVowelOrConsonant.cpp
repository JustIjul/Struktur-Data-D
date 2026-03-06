#include <bits/stdc++.h>

using namespace std;

void vowelOrConsonant(char c){
	if(c == 'A' || c == 'a' 
	|| c == 'I' || c == 'i' 
	|| c == 'U' || c == 'u' 
	|| c == 'E' || c == 'e' 
	|| c == 'O' || c == 'o')
		cout << "Vowel" << endl;
	
	else
		cout << "Consonant" << endl;
}

int main(){
	
	vowelOrConsonant('v');
	vowelOrConsonant('H');
	vowelOrConsonant('I');
	vowelOrConsonant('a');
	
	return 0;
}

