  #include<iostream>
using namespace std;

int main(){

    int n, countt=1;
    cin>>n;
    bool flag = false;

    int arr[n], arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    arr2[0] = arr[0];

    for(int i=1; i<n; i++){

        bool repeat = false;
        for(int j=0; j<n; j++){
            if(arr[i] == arr2[j]){
                repeat = true;
                flag = true;
                break;
            }
        }

        if(!repeat){
            arr2[countt] = arr[i];
            countt++;
        }
    }

    if(!flag){
        cout<<"array already unique!"<<endl;
    }
    else{
        for(int i=0; i<countt; i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
