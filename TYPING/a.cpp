#include<iostream>
using namespace std;


int solve(int n){
	int count;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		count += 2;
		
		for(int j=1;j<s.length();j++){
			if(s[j-1] == 'd' || s[j-1] == 'f'){
				if(s[j] == 'd' || s[j] == 'f'){
					count+=4;
				}else{
					count+=2;
				}
			}else{
				if(s[j] == 'j' || s[j] == 'k'){
					count+=4;
				}else{
					count+=2;
				}
			}
		}
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		cout << solve(n) << endl;	
	}
}
