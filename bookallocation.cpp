#include<iostream>
using namespace std;

bool ispossiblesolution(int arr[], int size ,  int m , int mid ){
int studentcount = 1;
int pagesum = 0 ;
for(int i = 0 ; i < size ; i++){
    if((pagesum + arr[i]) <=  mid ){
    pagesum = pagesum + arr[i] ;
    }
else{ //pagesum + arr[i] > mid 
    studentcount++ ;
    if(studentcount > m || arr[i] > mid ){
        return false ;
         //for nextstudent
    }
    pagesum = arr[i] ;
}

}
return true ;


}


// binary search approach for checking that mid might be a possible solution or not .
int main()
{
    int arr[]= {10,20,30,40} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i =0 ; i< size ; i++){
        sum = sum + arr[i];
    }
    int s = 0;
    int e = sum ;
    int mid = (s+ e)/2 ;
int ans = 0 ;
    while(s<=e){
        if (ispossiblesolution( arr,  size ,    2 ,  mid)){
             ans = mid;
            e = mid - 1 ;

        }
        else{
            s = mid + 1 ;



        }
mid = (s + e)/2 ;

    }
    cout<< ans ;
    return 0;
}