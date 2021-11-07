#include<iostream>
using namespace std;
int main()
{
 int n;
 cin >> n;
 
 for(int i=0;i<n;i++){
   int a;
   cin >> a;
   int count =0;
   string str = to_string(a);
   for(int j=0;j<str.length();j++){
   	if(str[j] == '4'){
	  count++;
	}
   }
   cout << count << endl;
 }

 return 0;
}
