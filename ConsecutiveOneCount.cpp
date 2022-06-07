
/**https://workat.tech/problem-solving/practice/max-consecutive-ones**/

#include <iostream>
using namespace std;
int main(){
    cout<<"Program to maximum number of consecutive 1 in the array"<<endl;
    int arr_size{};
    cout<<"input the size of the array : ";
	cin>>arr_size;
	int arr[arr_size];
    
	//input the array element
	for(int indx=0;indx<arr_size;indx++){
	    cout<<"enter "<<indx+1<<" element :";
	    cin>>arr[indx];
	}
	//print the input array
	cout<<"the input array :"<<endl;
	for(int indx=0;indx<arr_size;indx++){
	    cout<<arr[indx]<<" ";
	}
	
	int counter{},max_counter{};
	for(int indx=0;indx<arr_size;indx++){
	    while(arr[indx]==1){
	        counter++;
	        indx++;
	        continue;
	    }
	    if(counter>max_counter){
	        max_counter=counter;
	    }
	    if(arr[indx]!=1){
	        counter=0;
	    }
	}
	cout<<endl;
	cout<<"maximum consecutive ones = "<<max_counter<<endl;
    return 0;
}
    
