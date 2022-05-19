#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
      for(int k=1;k<=n-i;k++){
        cout<<" ";
      }
     int r=2*i-1;
      for(int j=1;j<=r;j++){
          cout<<"*";
      }
      
      cout<<"\n";
    
    }
      for(int i=n;i>=1;i--){
      for(int k=1;k<=n-i;k++){
        cout<<" ";
      }
     int r=2*i-1;
      for(int j=1;j<=r;j++){
          cout<<"*";
      }
      
      cout<<"\n";
}
}