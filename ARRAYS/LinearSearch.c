#include<stdio.h>

int linearSearch(int arr[], int size, int element){

    for(int i= 0; i<size; i++){
        if(arr[i]==element){
            return i;
        }
   
    }
    return -1;

}

int main(){
    // int arr[] = {1, 4, 7, 6, 8, 21, 239, 10, 67};
    int arr[10];
  

    // printf("Enter the number of elements in an array: ");


    for(int i=0; i<10; ++i){
        printf("Enter the %d th element: ", i);
        scanf("%d", &arr[i]);
    }
      int size = sizeof(arr)/sizeof(int);
    int element = 7;
  

    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);


    return 0;

}
