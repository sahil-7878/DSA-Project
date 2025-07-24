#include <iostream>
using namespace std; 

int main() {
    int arr_size, i;
    cout << "Enter the array size: ";
    cin >> arr_size;
    
    int arr[arr_size];
    
    cout << "Enter the elements: " << endl;
    for(i=0; i<arr_size; i++){
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "Negative value is: ";
    for(i=0; i<arr_size; i++){
        if(arr[i] < 0){
            cout << arr[i] << " ";
        }else{
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}