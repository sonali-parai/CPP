
/**Program for prime number upto a range**/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Sieve of Eratosthene program"<<endl;
    int range{};
    cout<<"input the range : ";
    cin>>range;
    
    bool prime_no[range+1];
    memset(prime_no,true,sizeof(prime_no));//initializing all the element to "true"
    
    for(int indx=2;indx*indx<=range;indx++){
        if(prime_no[indx]==true){
            for(int indx2=indx*indx;indx2<=range;indx2=indx2+indx){
                prime_no[indx2]=false; // set the element status to false or "not prime"
            }
        }
    }
    
    //print the prime numbers into range
    for(int indx=2;indx<=range;indx++){
        if(prime_no[indx]==true){
            cout<<indx<<" ";
        }
    }
    return 0;
}
    
