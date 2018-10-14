#include <iostream>
using namespace std;
//write function that will find the sum of elements
int sum(int a[], int b){
    int s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s;
}
// main function
	int main(){
	int x;    //asking user to provide number of elements the array
	cout <<"enter the number of terms of the array"<<endl;
	cin >>x;//
	int arr[x];
	cout <<"enter the elements of array"<<endl;//asking for elements in array
	for(int n=0;n<x;n++)
	cin >>arr[n];
	int ele = sum(arr, x);
	cout <<"the sum is " <<ele<<endl;
return 0;
}

