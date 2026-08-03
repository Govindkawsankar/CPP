#include<iostream>
using namespace std;
int peakmountain(int arr[],int size){
int st = 0; int end = size- 1 ;
int mid = (st+ end )/2;
while(st<end){

if(arr[mid]> arr[mid+1]){
    end= mid;
}
if(arr[mid]< arr[mid+1]){
    st = mid + 1 ;


}
mid= (st+end)/2 ;
}
return st;


}
int main()
{   int arr[]= {0,1,2,3,4,8,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< peakmountain(arr,size) ;
    return 0;
}