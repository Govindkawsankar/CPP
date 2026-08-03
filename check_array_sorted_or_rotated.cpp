#include<iostream>
using namespace std;
bool checkarray(int arr[], int size ){
    int count = 0 ;
    for(int i = 0 ; i < size -1   ; i++){
        if(arr[i] > arr[i+1]){
            count++ ;
        }
    }
    if(arr[0] < arr[size -1]){
        count++ ;

    }
    return count <=1 ;
}
int main()
{
    int arr[]= {0,13,2,4,6,9,10};
    int size = 6;
    cout<<checkarray(arr, size );
    return 0;
}