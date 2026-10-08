// #include<iostream>
// using namespace std;
//  void sort(int arr[], int n){
//     for(int i = 0; i<n-1 ;i++)
//     {
//         for (int j= 0; j<n-1;j++){
//             if(arr[j]>arr[j+1]){

//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//  }
// int main(){
//     int arr[100],n;
//     cout<<"enter number of array ";
//     cin>>n;
//     for(int i = 0; i<n ;i++){
//         cin>>arr[i];
      
//     }
//       sort(arr,n);
//     for(int i = 0;i<n ; i++){
//         cout<<arr[i]<<" ";
//     }


// }



    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter n number : ";
        cin>>n;
        for(int i = n; i<=n*10; i=i+n){
            cout<<i<<endl;
        }


    }
