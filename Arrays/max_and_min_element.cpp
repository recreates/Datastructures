#include <iostream>
#include <climits> //- header file for INT_MAX AND INT_MIN
using namespace std;

int maxelement(int arr[], int n);
int minelement(int arr[], int n);
void takeinput(int arr[], int n);
void printarray(int arr[], int n);
int main(){
    int arr[100], size;
    cout << "Enter the array size: ";
    cin >> size;
    if(size>0){

    
    takeinput(arr, size);
    printarray(arr, size);
    cout << "\nMaximum element: " << maxelement(arr, size)<<endl;
    cout << "\nMinimum element: " << minelement(arr, size)<<endl;
    }
    else{
    cout << "Array size cannot be 0 or less";
    }
    return 0;
}

int maxelement(int arr[], int *n){
    int max = INT_MIN;
    for (int i = 0; i < *n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int minelement(int arr[], int *n){
    int min = INT_MAX;
    for (int i = 0; i < *n;i++){
      if(arr[i]<min){
            min = arr[i];
      }
    }
    return min;
}
void takeinput(int arr[], int *n){
    cout << "Enter the size of array: ";
    cin >> *n;
    if(*n<=0){
      cout << "Array size cannot be 0 or less" << endl;
    }
    else{

    
    cout << "\nEnter the elements:" << endl;
    for (int i = 0; i < *n;i++){
        cin >> arr[i];
    }
}
}
void printarray(int arr[], int n){
   cout << "\nPrinting the array:\n";
   for (int i = 0; i < n;i++){
    cout << " "<<arr[i];
   }
}