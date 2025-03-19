#include<iostream>
using namespace std;
void selectionSort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(a[min]>a[j]){
                min=j;
            }
            int temp;
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
			 }   
    } 
}
int main(){
	cout<<"Enter size of array:";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<=n-1;i++){
	cin>>a[i];
    }
    selectionSort(a,n);
    cout<<"elements after sorting "<<endl;
    for(int i=0;i<=n-1;i++){
        
        cout<<a[i];
        cout<<" ";
    }    
}
