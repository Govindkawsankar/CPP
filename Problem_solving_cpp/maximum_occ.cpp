#include<iostream>
#include<string.h>
using namespace std;
char maxiOcc(string s){
    int number = 0 ;
    int arr[26] ={0};
    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i] ;
        //lower case
        if(ch >= 'a' && ch <= 'z'){
            number = ch -'a';

        } // upper case
        else{
            number = ch -'A';
        }
        arr[number]++ ;
        int maxi = -1 ;
        int ans = 0 ;
       
    }
    int maxi = -1 ;
        int ans = 0 ;
    for(int i = 0 ; i < 26 ; i++){
        
       
            if(maxi  < arr[i]){
                ans = i ;
                maxi = arr[i];

            }
        }
        char final_ans = ans + 'a' ; 
     return final_ans ;

}
int main()
{
    int arr[26] ={0};
    string s = "babbar";

    cout<<maxiOcc(s);
    return 0;
}