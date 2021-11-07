#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>  n;
	for(int i=0;i<n;i++){
		int a,b,c,d;
		cin >> a  >> b >> c >> d;
		int x = a+b+c;
		int ans;
		if(x <= d){
		    ans = 1;
		}else if(a+b <= d){
            ans=2;
		}else{
		    ans=3;
		}
		cout << ans << endl;
	}
}

