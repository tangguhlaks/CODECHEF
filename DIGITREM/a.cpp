#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,d;
		cin >> n >> d;
		if(n != d){
			string a = to_string(n);
			string b = to_string(d);
			int c;
			bool flag = false;		
			for(int i=0;i<a.length();i++){
				if(a[i] == b[0]){
					c = i;
					break;				
				}
				if(i == a.length()-1 && a[i] != b){
					flag = true;
				}
			}
			if(flag){
				cout << 0 << endl;
			}else{
				if(d == 9){
					int temp = atoi(a[c-1]);
					string temp2 = to_string(temp+1);
					a[c-1] = temp2[0];
					for(int i=c;i<a.length();i++){
						a[i] = '0';
					}
				}else if(d == 0){
					for(int i=c;i<a.length();i++){
						a[i] = '1';
					}
				}else{
					int temp = atoi(a[c]);
					string temp2 = to_string(temp+1);
					a[c] = temp2[0];
					for(int i=c+1;i<a.length();i++){
						a[i] = '0';
					}
				}
				int nn = stoi(a);
				int ans =  nn - n;
				cout << ans << endl;
			}

		}else{
			cout << 1 << endl;
		}
	}
}
