#include<iostream>
using namespace std;

void sort(int array[], int size);

int main(){
    int array[] = {10,1,9,2,8,3,7,4,6,5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    
    
    return 0;
}

void sort(int array[], int size){
    int temp;

    for(int i=0; i<size-1; i++){      //    i = 0 1 2 3 4 5 6 7 8
        for(int j=0;j<size-i-1; j++){ // size = 9 8 7 6 5 4 3 2 1
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}