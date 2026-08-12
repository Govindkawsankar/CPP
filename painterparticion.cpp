#include<iostream>
using namespace std;
bool ispossible(int arr[], int k,int mid , int size ){
    int painter = 1;
    int paintpart = 0;
    for(int i = 0 ; i < size ; i++){
    if(mid >= arr[i] + paintpart){
        paintpart = paintpart + arr[i] ;
    }
    else {
        painter++ ;
        
        if(painter > k || arr[i] > mid){
            return false ;
        }
paintpart = arr[i];
    }
    
    }
    return true ;



}
int main()
{
    int arr[]= {1,2,3,4} ;
    int size = 4 ;
    int s = 0 ;
    int sum = 0 ;
    for(int  i = 0 ; i < size ; i++){
    sum = sum + arr[i];
    }
    int e = sum ;
    int ans = 0 ;
    int mid = (s+ e)/ 2 ;
    while(s < e ){
      if(ispossible(arr,2,mid,size) ){
        ans = mid ;
        e = mid-1 ;

      }  
      else {
        s = mid + 1 ;
      }
      mid = (s + e)/2 ;


    }
    cout<< ans ;
    return 0;
}