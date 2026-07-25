#include<iostream>
using namespace std;
// two pointers app.
int main()
{
  int  arr1 []= {1,2,3,4,5} ;
int arr2[]= {2,3,4,5,6};
int size1 = sizeof(arr1) / sizeof(arr1[0]);
int size2 = sizeof(arr2) / sizeof(arr2[0]);
int i = 0;
int j = 0;
int k = 0;
int nums[100];
while(i < size1 && j < size2){
if(arr1[i]> arr2[j]){
    j++ ;


}
if(arr1[i]< arr2[j]){
    i++ ;


}
if(arr1[i]== arr2[j]){
     nums[k] = arr1[i];
i++;
j++;
k++;
}
}
for(int i = 0 ; i<k ; i++){
    cout<< nums[i];
}
    return 0;
}