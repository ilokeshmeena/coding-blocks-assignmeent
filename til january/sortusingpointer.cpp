#include<iostream>
using namespace std;
void sortusingpointer(int *arr,int n){
    if(n==0){
        return;
    }
    for(int j=0;j<n;j++){
       for(int i=0;i<n-j-1;i++){
        if(*(arr+i) > *(arr+i+1)){
            int  temp=*(arr+i);
            *(arr+i)=*(arr+i+1);
            *(arr+i+1)=temp;
        }
    }
    }

}
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortusingpointer(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}






















































































































































































































































































































































































































