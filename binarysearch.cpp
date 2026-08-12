#include<iostream>
using namespace std;
int  binarysearch(int arr[],  int size ,int k  ){
    int s = 0 ;
    int end = size -1 ;
    int mid = (s+end)/2;
    int ans = 0;
    while(s<=end){
        if(arr[mid]==k){
             ans = mid ;
             return ans ;
        }
        if(arr[mid] > k)
        end = mid -1 ;
        if(arr[mid] < k)
        s = mid + 1;
        mid = (s+ end )/2 ;
    }
    return -1 ;
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7};
    int size = 7;
    int a = binarysearch( arr,   size ,6 );  
    cout << a ;
    return 0;
}