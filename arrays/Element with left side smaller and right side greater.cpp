// https://practice.geeksforgeeks.org/problems/unsorted-array4925/1

int findElement(int arr[], int n) {
    int left[n],right[n];
    right[n-1]=arr[n-1];
    left[0]=arr[0];
    for(int i=1;i<n;i++) left[i]=max(left[i-1],arr[i]);
    for(int i=n-2;i>=0;i--) right[i]=min(right[i+1],arr[i]);
    for(int i=1;i<n-1;i++) if(left[i]<=arr[i] and right[i+1]>=arr[i]) return arr[i];
    return -1;
}
