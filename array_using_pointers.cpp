#include<iostream>
using namespace std;

int main(){
    int arry[5],*ptr;
    ptr=arry;
    cout<<"Enter elements in array :";
    for(int i=0;i<5;i++){
        cin>>arry[i];
    }
    cout<<"Elements in array :";
    for(int i=0;i<=5;i++){
        cout<<*ptr<<"\t";
        ptr++;
    }
    return 0;
}