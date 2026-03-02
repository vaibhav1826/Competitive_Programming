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

int main(){
    vector<int>heaparr;
    vector<int> arr={50,55,53,52,54};
    for(int i=0;i<arr.size();i++){
        heap(arr[i],heaparr);
    }
    for(int i=0;i<heaparr.size();i++){
        cout<<heaparr[i]<<" ";
    }
};