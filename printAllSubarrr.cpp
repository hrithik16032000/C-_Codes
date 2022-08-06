#include<iostream>
using namespace std;

void printAllSubArr(int arr[], int n){

//int count =0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            //cout<<"("<<i<<","<<j<<")"<<endl;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
                //count++;
            }
            cout<<endl;
        }
    }

    //cout<<count;
}

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

   printAllSubArr(arr, n);

    return 0;
}