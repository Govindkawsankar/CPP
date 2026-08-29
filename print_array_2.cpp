#include<iostream>
using namespace std;
void print_array(int array[][3] , int row , int col){
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cin>>array[i][j];
        }
         
    }
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cout<<array[j][i]<<" ";
        }
        cout<< endl ;
    }

}
    
    

int main(){
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    print_array( array ,  3 ,  3);
    return 0;
}