#include<iostream>

using namespace std;


void    insertionSort(int  a[], int n){
    
    int j, temp;
    
    for(int i = 0; i < n; i++){
        
        j = i;
        temp = a[i];
        
        while( j > 0 && a[j-1] > temp){
            
            temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            temp = a[j-1];
            j--;
        }
        
    
        
    }
    
}

void    printList(int   a[], int n){
    
    
    cout<<"\n";
    for(int i =0 ; i < n; i++){
        
        cout<<"\t"<<a[i];
        
    }
    cout<<"\n";
}

int main(){
    
    int a[] = {400, 700, 20, 300, 500, 30, 10, 5, 0};
    int n = 9;
    
    printList(a, n);
    insertionSort(a, n);
    printList(a ,n);
    return  0;
}