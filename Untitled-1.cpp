#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin>>x;
        int y=x*3;
        int n=(y-1)/2;
        if((y-1)%2==0){
            cout<<1<<" "<<n-1<<" "<<n+1<<endl;
            
        }
        if((y-1)%2==1){
            cout<<1<<" "<<n<<" "<<n+1<<endl;
        }
    }
	// your code goes here
	return 0;
}