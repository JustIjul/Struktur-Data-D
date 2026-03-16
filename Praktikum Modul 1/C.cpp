#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	cin >> s;
	
	int minS = 0, minD = 0;
	
	bool first = true;
	
	vector<char>v;
	
	while(true){
		int jmlhS = 0, jmlhD = 0;
		
		if(first){
			for(int i = 0; i < s.size(); i++){
				if(!v.size()){
					v.push_back(s[i]);
					if(s[i] == 'S')minD++;
					if(s[i] == 'D')minS++;
				}
				if(s[i] == 'S' && minS == 0){
					v.push_back(s[i]);
					minD++;
				}else
				if(s[i] == 'S' && minS > 0){
					minS--;
				}else
				if(s[i] == 'D' && minD == 0){
					v.push_back(s[i]);
					minS++;
				}else
				if(s[i] == 'D' && minD > 0){
					minD--;
				}
			}
		}
		
		if(!first){
			for(int i = 0; i < v.size(); i++){
				if(v[i] == 'S'){
					if(minS){
						v[i] = 'M';
						minS--;
					}else{
						minD++;
					}
				}
				if(v[i] == 'D'){
					if(minD){
						v[i] = 'M';
						minD--;
					}else{
						minS++;
					}
				}
			}
		}
		
		for(int i = 0; i < v.size(); i++){
			if(v[i] == 'S') jmlhS++;
			if(v[i] == 'D') jmlhD++;
		}
		
		if(jmlhS == 0 && jmlhD > 0){
			cout << "Darsu";
			return 0;
		}
		if(jmlhD == 0 && jmlhS > 0){
			cout << "Sudar";
			return 0;
		}
		
		first = false;
	}

	return 0;
}

