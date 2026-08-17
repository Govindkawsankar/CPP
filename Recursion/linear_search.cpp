#include<iostream>
using namespace std;
bool search(int arr[] , int size ,  int key){
    //base case
    if(size == 0){
        return  false  ;
    }
    if(arr[0] == key){
        return true;

    }
    else {
        bool remaining_part = search(arr+1 , size -1 ,key);
        return remaining_part;
    }
    
}
int main()
{
    int arr[] ={1,2,3,4,5,6};
    int size = 6;
    cout<< search(arr , size , 7);
    return 0;
}