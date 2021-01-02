int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low;
    
    for(int j=low; j < high; j++){
        
        if(arr[j] <= pivot){
            if(j != low) swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

void quickSort(vector<int> &arr, int low, int high){
    
    if(low < high){
        //pi = parition index. The element at pi is in the right place
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
    return;   
}