#include <bits/stdc++.h>
using namespace std;

//BINARY SEARCH
int bs(int arr[], int n, int k, int l, int r) {
    while (l<=r) {
        int mid = (l+r)/2;
        if (k==arr[mid]) {return mid;}
        else if (k<arr[mid]) {
            r = mid-1;
            bs(arr, n, k, l, r);
        }
        else {
            l = mid+1;
            bs(arr, n, k, l, r);
        }
    }
    return -1;
}

//DRIVER CODE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >>n >>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    cout <<bs(arr, n, k, 0, n-1);
    
return 0;
}
