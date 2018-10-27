#include<iostream>
using namespace std;
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int bubble_sort(int arr[], int n){
   int i, j,swapTime=0;
   for (i = 0; i < n-1; i++){
		 // Last i elements are already in place   
		 for (j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapTime++;
            }
		 }
   }
   return swapTime;
      
}
int main(){
    int n;
    while(cin>>n){
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        /*
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        */
        cout<<"Minimum exchange operations : "<<bubble_sort(a,n)<<endl;
        /*
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        */
    }

}
