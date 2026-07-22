#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array: " << size << endl;

for(int i = 0 ; i < size; i++ ){
    cout<< arr[i] ;
}
int i = 0;
while(i < size-1){

    swap(arr[i],arr[i+1]) ;
    i=i+2 ;

}
for(int i = 0 ; i < size; i++ ){
    cout<< arr[i];
}
    return 0;
}