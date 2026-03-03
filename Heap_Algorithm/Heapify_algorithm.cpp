#include <iostream>
using namespace std;

void Heapify(vector<int>& arr,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    
    if(left<arr.size() && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<arr.size() && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=index){
        swap(arr[largest],arr[index]);
        Heapify(arr,largest);
    }
}

int main(){
    vector<int>arr={10, 5, 20, 2, 8};
    int n=arr.size()-1;
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
};