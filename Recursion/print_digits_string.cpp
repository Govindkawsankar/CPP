#include<iostream>
#include <string.h>
using namespace std;
void printNo(int n, string arr[]){
    if(n== 0){ //base case
        return ;
    }
    int digit = n % 10; // processing
    
    n = n / 10 ;
    printNo(n , arr); //recurssive call 

    cout << arr[digit] << " "; 

}
int main()
{
    int n ;
    cin>>n ;
    string arr[10] = { "zero", "one","two", "three" , "four" , "five" , "six","seven",
                       "eieght", "nine" } ;
     printNo(n , arr);
    
    return 0;
}