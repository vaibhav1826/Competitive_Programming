#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int>& arr, int size, int index){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;
    
    if(left < size && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < size && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != index){
        swap(arr[largest], arr[index]);
        Heapify(arr, size, largest); 
    }
}

void Heapsort(vector<int>& arr, int size){
    for(int i = size - 1; i > 0; i--){
        swap(arr[0], arr[i]);          
        Heapify(arr, i, 0);          
    }
}

int main(){
    vector<int> arr = {10, 5, 20, 2, 8};
    int n = arr.size();               

    // Build Max Heap
    for(int i = n/2 - 1; i >= 0; i--){
        Heapify(arr, n, i);           
    }

    // Heap Sort
    Heapsort(arr, n);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}