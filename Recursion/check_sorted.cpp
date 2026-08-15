#include<iostream>
using namespace std;
bool issorted(int arr[], int size){
    //base case 
    if((size == 0)|| (size== 1 )){
        return true ; // already sorted 
    } 
    if(arr[0] > arr[1]){
        return false ;
    }
    else{
      bool remaining_part = issorted(arr +1 , size -1);
      return remaining_part;
      
    }
}
int main()
{
    int arr[] = {1,3,2,4,5};
    if(issorted(arr , 5)){
        cout<< "array is sorted ";
    }
    else {
        cout << "array is not sorted";
    }
    return 0;
}