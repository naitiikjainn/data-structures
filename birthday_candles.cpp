#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int arr[num];
    for(int i =0;i<num;i++){
        cin >> arr[i];
    }
    int mn = INT_MIN;
    for(int i=0;i<num;i++){
        if(mn < arr[i]){
            mn = arr[i];
        }
    }
    int count =0;
    for(int i=0;i<num;i++){
        if(mn==arr[i]){
            count++;
        }
    }
    cout << count;
}