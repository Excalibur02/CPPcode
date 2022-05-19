#include<iostream>
using namespace std;

int main(){
    int w;
    cin>>w;
    int sav;
    cin>>sav;

  int bal=sav-w;
   (w%5==0 &&  bal>=0) ? cout<<bal : cout<< "abe nikku jhuggi sahi amount daal";
    

}