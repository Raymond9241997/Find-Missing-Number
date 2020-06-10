#include<iostream>

using namespace std;

int findMissingNUM ( int arr[] , int len ){
	int temp;
	
	temp = ((len + 1) * (len+2))/2;
	for ( int i= 0 ; i<len ; i++)
	temp -= arr[i];
	return temp;
}


int main(){
	int num;
	cout<<"Enter the size of the array"<<endl;
	
	cin>> num;
	
	int arr [num -1];
	
	cout<<"entter array values" ;
	for(int i =0 ; i<num ; i++ ){
		
		cin >> arr[i];
	}
	
	int missingNUM = findMissingNUM(arr , 5);
	cout<<"Missing Number is:" << missingNUM <<endl;
	return 0;
}
