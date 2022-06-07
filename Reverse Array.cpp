
#include <iostream>
using namespace std;

int main()
{
    cout<<"****Program to reverse the array****"<<endl;
    int num_arr[]{12,34,56,78,89,90};
    
    int length = sizeof(num_arr)/sizeof(num_arr[0]);
    
    //print the input array
    cout<<"input array"<<endl;
    for(int indx=0;indx<length;indx++){
        cout<<num_arr[indx]<<", ";
    }
    
    cout<<endl;
    //cout<<"size of the array : "<<length<<endl;
    
    //Logic for swapping the array elements
    int start{};
    int end =length-1;
    
    while(start<end){
        int tmp_start = num_arr[start];
        num_arr[start]=num_arr[end];
        num_arr[end]=tmp_start;
        start++;
        end--;
    }
    //print the reversed array
    cout<<"Output array"<<endl;
    for(int indx=0;indx<length;indx++){
        cout<<num_arr[indx]<<", ";
    }
    
   
    return 0;
}
