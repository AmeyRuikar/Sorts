#include<iostream>

using namespace std;

void    selectionSort(int a[], int n){
    
    int min = 9999;
    int temp;
    int index;
    
    for(int i=0; i< n; i++){
        
        min = 9999;
        
        for(int j = i; j < n; j++){
            
            if(a[j] < min){
                min = a[j];
                index = j;
            }
            
        }
        
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
        
    }
    
    
}

void    printList(int   a[], int n){
    
    cout<<"\n";
    for(int i = 0; i < n; i++){
        
        cout<<a[i]<<"\t";
        
    }
}

int main(){
    
    int a[] = {600, 10, 50, 60, 20, 5, 90};
    int n = 7;
    
    printList(a, 7);
    selectionSort(a, 7);
    printList(a, 7);
    return  0;
}