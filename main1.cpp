#include<iostream>
using namespace std;
bool estPair(int n){
    return n % 2 ==0;
}
bool estMultipleDeTrois(int n){
    return n % 3 ==0;
}
int main(){
int n;
cout<<"donner un entier : ";
cin>>n;
if(estPair(n))
cout<<n<<"est pair"<<endl;
else 
cout<<n<<"est impair"<<endl;
if(estMultipleDeTrois(n))
cout<<n<<"est multiple de 3 "<<endl;
else 
cout<<n<<"n est pas multiple de 3"<<endl;
if (estPair(n) && estMultipleDeTrois(n) )
cout<<n<< "est divisible par 6"<<endl;
return 0;
}