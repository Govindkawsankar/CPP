#include<iostream>
using namespace std;
#include<vector>

void rotate(int nums[],int size , int k) {
int temp[100] ;

for(int i = 0 ; i < size ;  i++){

temp[(i+k) % size] = nums[i] ;

}


for(int i = 0;i < size ; i++){
    nums[i] = temp[i];
}

    }
    

int main()
{
    int size = 6 ;
    int nums[] = {1,2,3,4,5,6} ;
    rotate(nums ,size , 4);
    for(int i =0 ; i < size ; i++){
        cout<< nums[i];
    }
    return 0;
    
}