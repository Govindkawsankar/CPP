#include<iostream>
using namespace std;
bool ispossible(int arr[], int size , int m , int mid){
    int studentcount = 1;
    int pagesum = 0;
    for(int i = 0 ; i < size ; i++){
        if(mid >= pagesum + arr[i]){
            pagesum = pagesum + arr[i];
        }
        else {
            studentcount++;
            if(studentcount > m || arr[i] > mid ){
                return false ;
            }
            pagesum = arr[i];

        }
    }
return true ;
}

int main()
{
    int arr[] = {20,30,40,50,60,70};
    int size = 6;
    int s = 0 ;
    int count = 0 ;
    for(int i = 0; i < size ; i++){
        count = count + arr[i];
    }
    int e = count ;
    int ans = 0 ;
   
   while(s <= e){

    int mid = (s+e)/2 ;
    
   if(ispossible(arr,size,2,mid)){
    ans = mid ;
    e = mid -1 ;
   }
   else {
   s = mid +1 ;
   }
   mid = (s+ e)/2 ;
}
cout << ans ;
    return 0;
}