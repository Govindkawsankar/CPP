#include<iostream>
using namespace std;
int firstocc(int arr[], int size , int key){

int str = 0;
int end = size-1 ;
int mid = (str + end) / 2 ;
int ans= -1 ;
while(str <= end ){
if(key > arr[mid]){
str = mid +1  ;

}
else if(key < arr[mid]){

    end = mid - 1  ;
}
else {
     ans = mid  ;
    end = mid-1;
    
}
mid = (str + end )/ 2 ;
}

return ans  ;


}
int lastocc(int arr[], int size , int key){

int str = 0;
int end = size-1 ;
int mid = (str + end) / 2 ;
int ans = -1 ;
while(str <= end ){
if(key > arr[mid]){
str = mid +1  ;

}
else if(key < arr[mid]){

    end = mid - 1  ;
}
else {
     ans = mid  ;
    str = mid + 1;
    
}
mid = (str + end )/ 2 ;
}
return ans  ;

}
int main()
{
   int arr[]= {0,1,1,1,1,4,4,4,4,4,4,4,4,4,4,6,7,8,9} ;
    int size = sizeof(arr)/ sizeof(arr[0]) ;
    int a = firstocc(arr, size,4) ;
    int b = lastocc(arr, size,4) ;
    cout<< (b-a)+1 ; //counts number of occ.
    return 0;
}