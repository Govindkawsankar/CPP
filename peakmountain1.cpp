#include<iostream>
using namespace std;
int peakmountain(int arr[], int size  ){
    int s = 0;
    int end = size -1 ;
    int mid = (s + end)/2 ;
    while(s<end ){
        if(arr[mid]< arr[mid+1] ){
            s = mid +1 ;
        }
    if(arr[mid ]> arr[mid+1 ]){
        end = mid ;
    }
    mid = (s+end)/2 ; 
    } 
    return s ;
}
int main()
{
    int arr[]= {0,1,2,3,4,8,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< peakmountain(arr,size);
    return 0;
}