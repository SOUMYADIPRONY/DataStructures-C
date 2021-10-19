#include<stdio.h>


int binarySearch(int arr[], int size, int element){


        int low, mid, high;
        low = 0;
        high = size - 1;
        // KEEP searching the elements until low and high converges
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]== element){
                return mid;
            }
            if(arr[mid]< element){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        // END SEARCHING


        return -1;
}


int main(){


    int arr[] = {3, 7, 8, 9, 14, 28, 67, 78, 89};
    int size = sizeof(arr)/sizeof(int);
    int element = 9;

    int searchIndex = binarySearch(arr, size, element);
    printf("The %d element was found in the %d index\n", element, searchIndex);
    return 0;

}