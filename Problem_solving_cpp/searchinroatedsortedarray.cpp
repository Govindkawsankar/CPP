#include<iostream>
using namespace std;

int pivot = -1 ;
int findpivot(int arr[], int size ){

int st = 0;
int end = size -1 ;
int mid = (st + end )/2 ;
while(st<end){

if(arr[0]<= arr[mid]){
st = mid + 1 ;

}
else{
    end = mid ;
}
mid = (st + end )/ 2;

}
pivot = st ;
return pivot ;
}

int binarysearch(int arr[], int size , int st, int end , int key ){
int mid = (st + end )/ 2;
int ans = -1 ;
while(st<=end){

if(arr[mid]> key){
end = mid-1 ;

}
else if(arr[mid ]< key){
st = mid + 1 ;
}
else{
     return mid  ;
}
mid = (st+ end )/ 2 ;
}

}
int searchinroatated(int arr[],int size , int key ){
    int end = size-1 ;
    int st = 0;
if(arr[pivot]<= key && arr[size-1]> key){
    return binarysearch(arr,size,pivot,end,key ) ;
}
else{
    return binarysearch(arr,size,st,pivot-1 ,key ) ;
}
return -1 ;
}



int main()
{
    int arr[]= {8,9,1,2,3,4,5,6} ;
   int size = sizeof(arr)/ sizeof(arr[0]) ;
cout<< findpivot(arr,size) ;
  cout<< searchinroatated(arr,size,3)  ;
    return 0;
}