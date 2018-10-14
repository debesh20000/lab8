#include <iostream>
using namespace std;

int kmax(int a[], int b, int c){//for maximum
	return a[b-c];
}
int kmin(int a[], int b, int c){//for minimum
	return a[c-1];
}
//write main function
	int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;//ask for elemets in array
	int arr[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>arr[n];
	
	for (int i=0;i<x-1;i++)    
        for (int l=0;l<x-i-1;l++)  
	if(arr[l]>arr[l+1]) {//this will arrange elements according to value
		arr[l]=arr[l]+arr[l+1];
		arr[l+1]=arr[l]-arr[l+1];
		arr[l]=arr[l]-arr[l+1];}
	//ask user
	cout <<"enter the k as in to find the kth largest and smallest"<<endl;
	int k;
	cin >>k;
	int max = kmax(arr, x, k);
	int min = kmin(arr, x, k);
	cout <<"kth maximum is "<< max <<endl;//displying kth maximum
	cout <<"kth minimum is "<< min <<endl;//displaying kth minimum
	return 0;
}
