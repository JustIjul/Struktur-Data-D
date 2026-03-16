#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	stack<char> stack1, stack2, stack1Output, stack2Output;
	queue<char> stackSmntr;
	while(t--){
		char c;
		cin >> c;
		stack1.push(c);
	}
	
	int n;
	cin >> n;
	while(n--){
		string cmd;
		int i, j;
		cin >> cmd;
		if(cmd == "PULL"){
			cin >> i;
			if(i > stack1.size()){
				cout << "Macaron Furina tidak sebanyak itu pls!" << endl;
				continue;
			}
			i--;
			while(i--){
				stackSmntr.push(stack1.top());
				stack1.pop();
			}
			stack2.push(stack1.top());
			stack1.pop();
			while(!stackSmntr.empty()){
				stack1.push(stackSmntr.front());
				stackSmntr.pop();
			}
		}else
		if(cmd == "PUT"){
			i = stack2.size();
			while(i--){
				stack1.push(stack2.top());
				stack2.pop();
			}
		}
		else{
			cout << "Apa itu? Furina tidak paham!" << endl;
		}
	}
	
	while(!stack1.empty()){
		stack1Output.push(stack1.top());
		stack1.pop();
	}
	
	while(!stack2.empty()){
		stack2Output.push(stack2.top());
		stack2.pop();
	}
	
	while(!stack1Output.empty()){
		cout << stack1Output.top() << " ";
		stack1Output.pop();
	}
	
	cout << endl;
	
	while(!stack2Output.empty()){
		cout << stack2Output.top() << " ";
		stack2Output.pop();
	}
	
	return 0;
}

