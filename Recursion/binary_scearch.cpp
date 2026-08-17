#include<iostream>
using namespace std;
int binary_search(int arr[] , int st , int end ,   int key){

    if(st > end ){ // element not found
        return -1 ;
    }
    int mid = (st  +end ) / 2 ; 
    if(arr[mid] == key){
        return mid ;
    }
    
    if(arr[mid] > key){
        return binary_search(arr ,st , mid-1 , key ) ;
    }
    if(arr[mid] < key){
        return binary_search(arr , mid+1 , end ,key);
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8 ;
    cout << binary_search(arr, 0, size-1 , 6);
    
    return 0;
}