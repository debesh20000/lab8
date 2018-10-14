#include <iostream>
using namespace std;
//write function to find mean
float mean(int a[], int b){
    float s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s/b;
}
int max(int a[], int b){//for maximum element
	return a[b-1];
}
int min(int a[], int b){//for minimum element
	return a[0];
}
float median(int a[],int b){//for median of elements
	if(b%2==0)
	return ((a[b/2-1]+a[b/2])/2);
	else
	return a[(b-1)/2];
}
int mostFrequent(int a[], int n) 
{ 
   
    // find the max frequency 
    int maxcount = 1, res = a[0], currcount = 1; 
    for (int i = 1; i < n; i++) { 
        if (a[i] == a[i - 1]) 
            currcount++; 
        else { 
            if (currcount > maxcount) { 
                maxcount = currcount; 
                res = a[i - 1]; 
            } 
            currcount = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (currcount > maxcount) 
    { 
        maxcount = currcount; 
        res = a[n - 1]; 
    } 
  
    return res; 
} 
//main function
	int main(){
	int x;   
	cout <<"enter the number of terms to be in array"<<endl;//asking user for number of terms 	  in arraY
	cin >>x;
	int arr[x];
	cout <<"enter the elements of the array"<<endl;//asking for elements in array
	for(int n=0;n<x;n++)
	cin >>arr[n];
	float meanofarray = mean(arr, x);
	for (int i=0;i<x-1;i++)    
        for (int l=0;l<x-i-1;l++)  
	if(arr[l]>arr[l+1]) {//this will arrange elements according to value
		arr[l]=arr[l]+arr[l+1];
		arr[l+1]=arr[l]-arr[l+1];
		arr[l]=arr[l]-arr[l+1];
	}
	int maximum = max(arr, x);
	int minimum = min(arr, x);
	float medianof = median(arr, x);
	int freq = mostFrequent(arr, x);
	cout <<"the mean of elements of array is "<<meanofarray<<endl;
	cout <<"the maximum element of array is "<<maximum<<endl;
	cout <<"the minimum elements of array is "<<minimum<<endl;
	cout <<"the median of array is "<<medianof<<endl;
	cout <<"the most frequent element is "<<freq<<endl;
return 0;
}

