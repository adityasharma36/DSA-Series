#include<iostream>
#include<vector>
using namespace std;
void mergeCopy(vector<int> & array,int & start,int& end ,int& mid){
    int leftLenght = mid-start+1;
    int rightLength = end-mid;

    int *leftArray = new int[leftLenght];
    int *rightArray = new int[rightLength];

    int index = start;
    for(int i = 0;i<leftLenght;i++){
        leftArray[i]= array[index];
        index++;
    }
    index = mid+1;
    for(int i = 0;i<rightLength;i++){
        rightArray[i]= array[index];
        index++;
    }

    int start1 = 0;
    int start2 = 0;
    int mainIndex = start;
    while(start1<leftLenght && start2<rightLength){
        if(leftArray[start1]>rightArray[start2]){
            array[mainIndex] = rightArray[start2];
            start2++;
            mainIndex++;
        }else{
            array[mainIndex]= leftArray[start1];
            start1++;
            mainIndex++;
        }
    }
    for(int i = start1;i<leftLenght;i++){
        array[mainIndex]= leftArray[i];
        mainIndex++;
    }
    for(int i = start2;i<rightLength;i++){
        array[mainIndex]= rightArray[i];
        mainIndex++;
    }

}
void mergeSort(vector<int> & array,int start,int end){
    if(start>=end){
        return ;
    }
    int mid = (end-start)/2 + start;
    mergeSort(array,start,mid);
    mergeSort(array,mid+1,end);
    mergeCopy(array,start,end,mid);
}
int main(){
    vector<int> array  = {10,80,110,90,50,30,40,20};
    int start = 0;
    int end = array.size()-1;
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    mergeSort(array,start,end);
    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
}