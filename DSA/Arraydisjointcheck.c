#include<stdio.h>

int disjoint(int arr1[], int arr2[], int n, int m){
    
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){ if(arr1[i]>arr1[j]){
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    
    
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){ if(arr2[i]>arr2[j]){
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
        
    }
    
    
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if set1[i] == set2[j] */
            return 0;
    }
 
    return 1;
}

int main(){
    
    int arr1[] = {1, 2, 5, 7};
    int arr2[] = {2, 9, 8, 7, 3};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    if(disjoint(arr1, arr2, n, m))
    printf("Yes");
    
    else printf("No");
    
}
