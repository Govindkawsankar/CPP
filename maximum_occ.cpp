#include<iostream>
#include<string.h>
using namespace std;
int maxiOcc(string s){
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


    }

}
int main()
{
    int arr[26] ={0};
    string s = "babbar";

    cout<<maxiOcc(s);
    return 0;
}