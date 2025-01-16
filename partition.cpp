void partition(int arr[], int l, int h, int p){
    int temp[h-l+1], index = 0;
    for(int i=l; i<=h; i++){
        if(arr[i]<=arr[p] && i!=p){
            temp[index] = arr[i];
            index++;
        }    }
        temp[index] = arr[p];
    for(int i=l; i<=h; i++){
        if(arr[i]>arr[p]){
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i=l; i<=h; i++){
        arr[i] = temp[i-l];
    }
}

// O(N) time | O(n) space
