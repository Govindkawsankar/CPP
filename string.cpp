#include<iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";
    int start = 0;
    int end = str.length()-1;
    while(start < end ){
    swap(str[start],str[end]) ;
    start++; end--;
    }
    cout<< str ;
    return 0;
}