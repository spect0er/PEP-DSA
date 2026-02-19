/*
    Heaps: a heap is a complete binary tree that follows the heap order property
    Complete Binary Tree: all levels are completely filled except the last level, the last level is filled from left to right
    Heap Order Property:1->Max-Heap: Every parent node is >= to it's children nodes. The largest element is always at root.
                        2->Min-Heap: Every parent node is <= to it's children nodes. the smallest element is always at top.
    **Important -> heap is not a BST
    For any node: 
        If indexing is 1 based: left child = 2 * i, right child = 2*i + 1, parent node: i/2;
        If indexing is 0 based: left child = 2 * i + 1, right child = 2 *i + 2, parent node: (i-1) / 2;
        

*/

#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        while(index > 0){
            // find the parent
            int parent = (index-1)/2;

            // if curr node > than parent
            if(heap[index] > heap[parent]){
                swap(heap[index],heap[parent]);
                index = parent;
            }else{
                break;
            }
        }
    }
    void bubbleDown(int index){
        int i = 0;
        int size = heap.size();
        while(i < size){
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;
            if(left < size && heap[left] > heap[largest]){
                largest = left;
            }
            if(right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(head[i],heap[largest]);
                i = largest;
            }else{
                break;
            }
        }


    }
    void insert(int value){
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }
    void deletion(){
        swap(heap[0],heap[heap.size() - 1]);
        heap.pop_back();
        bubbleDown();
    }
    
};

int main(){


    return 0;
}