void merge(int a[], int b[], int m, int n){
    int i=0, j=0; 
    while(i<m && j<n){
        if(a[i] <= b[j]){
            cout<<a[i]<<" ";
            i++;
        }else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i < m){
        cout<<a[i]<<" ";
        i++;
    }
    while(j < n){
        cout<<b[j]<<" ";
        j++;
    }
}

//O(m + n)
/*
This function assumes both arrays are already sorted.
The time complexity is O(m + n), as each element from both arrays is processed once.
The space complexity is O(1) because no additional storage is used apart from the indices.
*/
