#include<iostream>
#include<climits>
using namespace std;
float avg(int arr[]  , int size){
    int sum =0;
    for(int i=0 ; i<size ; i++){
        sum+=arr[i];
    }
    float avgs = (float)sum / size;

    return avgs;
}  
int main(){
    int arr[]={100,101,4,99,85,63,963,101,78,963,0,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements in the array are : "<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float ele = avg(arr , n);
    cout<<"Average of array elements is : "<<ele<<endl;
    return 0;
}