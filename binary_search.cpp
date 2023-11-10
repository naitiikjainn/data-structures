#include<iostream>
using namespace std;
int bin(int arr[] , int a , int key){
    int start = 0;
    int end = a-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key < mid){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int num,key;
    cin >> key;
    cin >> num;
    int arr[num];
    for(int i =0;i<num;i++){
        cin>>arr[i];
    }
    cout << bin(arr , num,key);
}