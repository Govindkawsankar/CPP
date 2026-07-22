#include<iostream>
using namespace std;
void printarray(int nums[] ,int size){

for(int i = 0 ; i<size ; i++){
    cout<<nums[i];
}
}

int main()

{int ans = 0 ;
  int nums[5]= {1,2,3,1,4};
   // printarray(nums , 5);
for(int i = 0 ; i < 5 ; i++ ){
    
ans = ans ^ nums[i];

}
for(int i = 1 ; i <5 ; i++){
    ans = ans ^ i ;

}
cout<< ans ;

    return 0;
}