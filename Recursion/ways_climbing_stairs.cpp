#include<iostream>
using namespace std;

int climb_stairs(int n){
    //base case 
    if(n < 0 ){
        return 0 ;
    }
    if(n == 0){
        return 1 ;
    }
    int ans = climb_stairs(n-1)+ climb_stairs(n-2);
    return ans ;


}

int main()
{
    cout << climb_stairs(6); 
    return 0;
}