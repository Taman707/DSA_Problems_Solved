#include<iostream>
#include<climits>
using namespace std;
int second_largest_finder(int arr[]  , int size){
    if (size < 2) {
        return -1; // Not enough elements
    }
    int larg = INT_MIN;
    int sec_larg = larg;
    if (size == 2) {
        if (arr[0] == arr[1]) {
            return -1; // both elements same
        } else {
            return min(arr[0], arr[1]); // smaller one is second largest
        }
    }
    for(int i=0 ; i<size ; i++){
        if(arr[i]>larg){
            sec_larg = larg;
            larg = arr[i];
        }
        if(arr[i]<larg && sec_larg<arr[i] && larg != arr[i]){
            sec_larg = arr[i];
        }
    }
    if(sec_larg == INT_MIN){
        return -1;
    }
    return sec_larg;
}
int main(){
    int arr[]={100,101,4,99,85,63,963,101,78,963,0,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements in the array are : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ele = second_largest_finder(arr , n);
    if(ele==-1){
        cout<<"Second largest element does not exist"<<endl;
    }else{
        cout<<"Second Largest element of our array is : "<<ele<<endl;
    }
    return 0;
}