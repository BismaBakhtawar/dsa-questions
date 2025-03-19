#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
	 int didswap=0;
	for(int i=n-1;i>=1;i--){
		for(int j=0;j<=i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				didswap=1;
			}
			
		}
		if(didswap==0){
			break;
			//in this case time complexity is not worse and O(N) LINEAR TIME COMPLEXITY
			
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
    bubbleSort(a,n);
    cout<<"elements after sorting "<<endl;
    for(int i=0;i<=n-1;i++){
        
        cout<<a[i];
        cout<<" ";
    }    
}