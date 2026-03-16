#include <bits/stdc++.h>
//#include <string.h>

using namespace std;

int main(){

	string s;
	cin >> s;
//	vector<char>v;
//	for(int i = 0; i < strlen(s); i++){
//		v.push_back(s[i]);
//	}
	
	int idx = 1;
	bool akses = true;
//	cout << strlen(s);
//	cout << s.size()/s[0];
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ']' || s[i] == ')' || s[i] == '}' || s[i] == '[' || s[i] == '(' || s[i] == '{'){
			if(s[i] == ']' || s[i] == ')' || s[i] == '}') akses = false;
			if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
				if(akses)continue;
				else{
					cout << "FAIL";
					return 0;
				}
			}
			if(s[i] == ']'){
				if(s[i-idx] == '['){
					idx+=2;
					continue;
				}
				else{
					cout << "FAIL";
					return 0;
				}
			}else
			if(s[i] == ')'){
				if(s[i-idx] == '('){
					idx+=2;
					continue;
				}
				else{
					cout << "FAIL";
					return 0;
				}
			}else
			if(s[i] == '}'){
				if(s[i-idx] == '{'){
					idx+=2;
					continue;
				}
				else{
					cout << "FAIL";
					return 0;
				}
			}
		}else{
			cout << "FAIL";
			return 0;
		}
	}
	cout << "COMBO";

	return 0;
}

