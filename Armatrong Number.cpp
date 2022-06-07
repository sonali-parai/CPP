
#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    cout<<"Armstrong Number Program"<<endl;
    int input_num{163};
    string num_str = to_string(input_num); //integer to string conversion
    cout<<num_str<<endl;
    int length = num_str.size();
    cout<<"Number of digits : "<<length<<endl;
    int sum{},tmp_num{},rem{};
    tmp_num=input_num;
    for(int indx=1;indx<=length;indx++){
        rem=tmp_num%10;
       // cout<<"digit: "<<rem<<endl;
        sum=sum+pow(rem,length);
       // cout<<"sum : "<<sum<<endl;
        tmp_num=tmp_num/10;
    }
    if(sum==input_num){
        cout<<input_num<<" is an Armstrong Number."<<endl;
    }
    else if(sum!=input_num){
        cout<<input_num<<" is not an Armstrong Number."<<endl;
    }

    return 0;
}
