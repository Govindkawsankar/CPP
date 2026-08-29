#include<iostream>
using namespace std;
void print_spiral(int arr[][5] , int row ,  int col){
    
    int st_row = 0 ;
    int end_row = row-1;
    int  st_col = 0 ;
    int end_col = col-1;
    int total = row*col ;
    int count = 0;
    while(count < total){
        for(int i = st_col ; i <= end_col &&count < total ; i++  ){
            cout<< arr[st_row][i]<<" ";
            count++;
        }
        st_row++;
    
    for(int i = st_row ; i <= end_row &&count < total ; i++){
        cout<<arr[i][end_col]<<" ";
        count++;

    }
    end_col--;
    for(int i = end_col ; i >= st_col &&count < total ; i--){
        cout<<arr[end_row][i]<<" ";
        count++;
    }
    end_row--;
    for(int i = end_row ; i >= st_row &&count <total; i--){
        cout<<arr[i][st_col]<<" ";
        count++ ;
    }
    st_col++;
}
}
int main()
{
    int arr[][5] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    print_spiral(arr ,5 ,5 );
    return 0;
}