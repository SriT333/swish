#include<iostream.h>
using namespace std; 
int main(){
  int x,p;
  float next_amt,amount_ness;
  cin>>x>>p;
  next_amt=x;
  amount_ness=0;
  while(next_amt>=1){
    amount_ness+=next_amt;
    next_amt=x-(p*x)/100;
    }
  cout<<amount_ness<<"\n";
  return 0;
}
    
    
