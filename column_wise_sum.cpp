#include<iostream>
using namespace std;
void column_sum(int arr[][3], int row , int column){
    for(int i = 0 ; i < column ; i++){
        int sum = 0 ;
        for(int j =0 ; j < row ; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << " " ;
    }
}
int main()
{
    int arr[][3]  ={1,2,3,4,5,6,7,8,9}; 
     column_sum( arr, 3,3);
    return 0;
}