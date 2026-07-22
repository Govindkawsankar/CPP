#include<iostream>
using namespace std;
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
return st ;
}
int main(){

   
   int arr[]= {8,9,1,2,3,4,5,6} ;
   int size = sizeof(arr)/ sizeof(arr[0]) ;
cout<<findpivot(arr,size);
    return 0;
}