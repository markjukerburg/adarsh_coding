#include<iostream>
#include<vector>
using namespace std;

void swap(int i,int j,vector<int>&heap);
vector <int> heapSort(vector<int>& arr);
void maxHeapify(vector<int>&arr);
void shiftDown(int curIdx,int endIdx,vector<int>& heap);
 //void swap(int i,int j,vector<int>&heap);
vector <int> heapSort(vector<int>& arr)
{    maxHeapify(arr);
    for(int endIdx = arr.size()-1;endIdx>=0;endIdx--)
    {
        swap(0,endIdx,arr);
        shiftDown(0,endIdx-1,arr);
    }
   return arr;

}
 
void maxHeapify(vector<int>&arr)
{
  int parentIdx   = (int) (arr.size()-1)/2;
  for(int curIdx = parentIdx;curIdx>=0;curIdx--)
  {
       shiftDown(curIdx,arr.size()-1,arr);

  }
}
void shiftDown(int curIdx,int endIdx,vector<int>& heap)
{
 int firstChildIdx = curIdx*2+1;
 while(firstChildIdx <= endIdx)
 {
   int idxToSwap;
  int secondChildIdx  = (curIdx*2+2) <= endIdx ? (curIdx*2+2) : -1;
  if(secondChildIdx>-1 && heap[secondChildIdx]>heap[firstChildIdx])   
  {
     idxToSwap = secondChildIdx;

  }
  else
  {
      idxToSwap = firstChildIdx;
  }
  if(heap[idxToSwap] > heap[curIdx])
  {
      swap(idxToSwap,curIdx,heap);
      curIdx = idxToSwap;
      firstChildIdx = curIdx*2+1;
  }
  else
  {
      return;
  }

     
 }



}
void swap(int i,int j,vector<int>&heap)
{
 int temp  =  heap[i];
 heap[i] = heap[j];
 heap[j] = temp;
}


int main()
{
  vector<int> arr;//{ 8,5,2,9,5,6,3 }; 
  arr.push_back(8);
  arr.push_back(5);arr.push_back(2);arr.push_back(9);arr.push_back(5);arr.push_back(6);arr.push_back(3);
  vector<int> res   =  heapSort(arr);
for(int x : res)
{
    cout << x;
}
cout<<endl; 

}
