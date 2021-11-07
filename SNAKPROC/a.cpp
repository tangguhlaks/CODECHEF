#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ss;
		for(int j=0;j<n;j++){
			if(s[j]!='.'){
				ss+=s[j];
			}
		}
		bool ans = true;
		if(ss.length() % 2 != 0){
			ans = false;
		}else{
			for(int j=0;j<ss.length();j++){
				if(j % 2 == 0){
					if(ss[j] == 'T'){
						ans = false;
					}
				}else{
					if(ss[j] == 'H'){
						ans = false;
					}
				}
			}
		}

		if(ans){
		  cout << "Valid" <<  endl;
		}else{
		  cout << "Invalid" << endl;
		}
	}
}
