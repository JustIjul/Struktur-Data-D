#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin >> s;
	
	vector<char>v;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ']' || s[i] == ')' || s[i] == '}'){
			if(!v.size()){
				cout << "FAIL";
				return 0;
			}else{
				if(s[i] == ']'){
					if(v.back() == '['){
						v.pop_back();
						continue;
					}else{
						cout << "FAIL";
						return 0;
					}
				}else
				if(s[i] == ')'){
					if(v.back() == '('){
						v.pop_back();
						continue;
					}else{
						cout << "FAIL";
						return 0;
					}
				}else
				if(s[i] == '}'){
					if(v.back() == '{'){
						v.pop_back();
						continue;
					}else{
						cout << "FAIL";
						return 0;
					}
				}
			}
		}
		v.push_back(s[i]);
	}
	
	if(v.size())cout << "FAIL";
	else cout << "COMBO";
//	idx = 0;
//	
//	while(v.size()){
//			
//	}

	return 0;
}

