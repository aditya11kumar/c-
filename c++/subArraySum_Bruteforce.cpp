#include<iostream>
using namespace std;
int subArray_sum(int arr[], int n){
    int largest_sum = 0 ;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int subarray_sum = 0;
            for( int k = i; k <= j; k++){
                subarray_sum += arr[k];
            }
            largest_sum= max(subarray_sum, largest_sum);
        }
    }
    return largest_sum;
    
}
cout
int main(){
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<subArray_sum(arr,n);
}