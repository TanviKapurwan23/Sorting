//NAIVE SOLUTION
void segregatePosNeg(int arr[], int n){
    int temp[n], i=0;
    for(int j=0; j<n; j++){
        if(arr[j] < 0){
            temp[i] = arr[j];
            i++;
        }
    }
    for(int j=0; j<n; j++){
        if(arr[j] >= 0){
            temp[i] = arr[j];
            i++;
        }
    }
    for(int j=0; j<n; j++){
        arr[j] = temp[j];
    }
}

//EFFICIENT SOLUTION

void negPos(int arr[], int n){
    int i=-1, j=n;
    while(true){
        do{
            i++;
        }while(arr[i] < 0);
        do{
            j--;
        }while(arr[j] >= 0);
        if(i >= j){
            return;
        }
        swap(arr[i], arr[j]);
    }
}
