#include <iostream>
using namespace std;

void heap(int element, vector<int>& heaparr){
    heaparr.push_back(element);
    int index=heaparr.size()-1;
    while(index>0){
        int parent=(index-1)/2;
        if(heaparr[index]>heaparr[parent]){
            swap(heaparr[index],heaparr[parent]);
            index=parent;
        }
        else{
            return;
        }
    }
}

void deleteHeap(vector<int>& arr){
    if(arr.size()==0){
        cout<<"Heap is empty";
        return;
    }
    
    arr[0]=arr[arr.size()-1];
    
    arr.pop_back();
    
    int index=0;
    int size=arr.size();
    
    while(true){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        
        if(left<size && arr[largest]<arr[left]){
            largest=left;
        }
        
        if(right<size && arr[largest]<arr[right]){
            largest=right;
        }
        
        if(largest==index){
            break;
        }
        
        swap(arr[largest],arr[index]);
        index=largest;
    }
    
};

int main(){
    vector<int>heaparr;
    vector<int> arr={50,55,53,52,54};
    for(int i=0;i<arr.size();i++){
        heap(arr[i],heaparr);
    }
    deleteHeap(heaparr);
    
    for(int i=0;i<heaparr.size();i++){
        cout<<heaparr[i]<<" ";
    }
};




