void merge(int a[], int b[], int m, int n){
    int n1 = mid-low+1, n2 = high - mid;
    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
        left[i] = a[low+i];
    }
    for(int i=0; i<n2; i++){
        right[i] = a[mid + i + 1];
    }
    
    int i=0, j=0, k=low; 
    while(i<n1 && j<n2){
        if(left[i] <= right[j]){
            cout<<a[k] = left[i]<<" ";
            i++;
            k++;
        }else{
            cout<<a[k] = right[j]<<" ";
            j++;
            k++
        }
    }
    while(i < n1){
        cout<<a[k] = left[i]<<" ";
        i++;
        k++;
    }
    while(j < n2){
        cout<<b[j] = right[j]<<" ";
        j++;
        k++;
    }
}

