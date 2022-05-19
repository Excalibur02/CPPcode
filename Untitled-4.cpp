#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int A[n];
        int B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
            if(A[i]=B[i]-x ){
                cout<<"Yes"<<endl;
                continue;
            }
            if(A[i]=B[i]-y ){
                cout<<"Yes"<<endl;
                continue;
            }
            else{cout<<"No"<<endl;
            continue;}
        }
        
    }
    return 0;
}