#include<iostream>
using namespace std;
int findpivot(int arr[] , int size ){
    int s = 0 ; 
    int end = size -1 ;
    int mid = (s +end )/2 ;
    while(s < end ){
        if(arr[0] > arr[mid]){
            end = mid  ;
        }
        if(arr[0] < arr[mid]){
            s = mid + 1 ;
        }
        mid = (s+ end )/2 ;

    }
    return s ;

}
int main()
{
    int arr[]= {4,5,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< findpivot(arr,size);
    return 0;
}