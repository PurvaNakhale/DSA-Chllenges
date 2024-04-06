void bubbleSort(int arr[], int n)
    {
        int count = 0;
        if(n==1){
            return;
        }
        
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                count++;
            }
        }
        
        if(count==0){
            return;
        }
        
        bubbleSort(arr, n-1);
    }