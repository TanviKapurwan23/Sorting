//Naive 
void selectSort(arr, n){
    int temp[n];
    for(int i=0; i<n; i++){
        int mid_ind = 0;
        for(int j=1; j<n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        temp[i] = arr[mid_ind];
        arr[min_ind] = INF;
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}

void selectSort(arr, n){
    for(int i=0; i<n-1; i++){
        min_ind = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }
}
