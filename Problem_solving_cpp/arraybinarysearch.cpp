#include<iostream>
using namespace std;
int searchbinary(int arr[],int size, int key ){
int start = 0 ;
int end = size-1;
int mid = (start + end )/2 ;
while(start <= end){

if(key > arr[mid]){
start = mid +1  ;

}
else if(key < arr[mid]){

    end = mid - 1  ;
}
else {
    return mid  ;
}
mid = (start + end )/ 2 ;
}
return -1 ;
}
int main()
{
    int arr[]= {0,1,3,4,5,6,7,8,9} ;
    int size = sizeof(arr)/ sizeof(arr[0]) ;
    cout<< searchbinary( arr, size ,  9 );
    
    return 0;
}