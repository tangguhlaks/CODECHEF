#include<iostream>
using namespace std;
int solve(int a){
	int count=a;
	for(int i=a-1;i>1;i--){
		count *= i; 
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a; 
		cout << solve(a)<< endl;
	}
	return 0;
}

