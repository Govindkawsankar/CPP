#include<iostream>
using namespace std;
void print_sum(int array[][3] , int row , int column){
    
    
    
    for(int i = 0 ; i < row ; i++){
        int sum = 0;
        for(int j = 0 ; j < column ; j++){
            sum = sum + array[i][j];
        }
        cout<< sum<<" ";
    }
    
}

int main()
{
    int array[][3] = {1,2,3,4,5,6,7,8,9};

    print_sum(array , 3,3);

    return 0;
}