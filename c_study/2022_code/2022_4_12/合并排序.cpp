#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//void  mergeSort(int nums[], int length);
//
//void __mergeSort_split(int nums[], int start, int end);
//void __mergeSort_merge(int nums[], int start, int mid, int end);
//
//int main() 
//{
//    int nums[] = { 5, 3, 2, 6, 32, 21, 35, 65, 1, 9 };
//    int length = sizeof(nums) / sizeof(int);
//
//    mergeSort(nums, length);
//
//    for (int i = 0; i < length; i++) 
//    {
//        printf("%d%s", nums[i], i == length - 1 ? "\n" : " ");
//    }
//
//    return 0;
//}
//
//void mergeSort(int nums[], int length) {
//    __mergeSort_split(nums, 0, length - 1);
//}
//
//void __mergeSort_split(int nums[], int start, int end) {
//    // prevent the index overflow
//    int mid = start + (end - start) / 2;
//
//    if (start >= end) {
//        return;
//    }
//
//    __mergeSort_split(nums, start, mid);
//    __mergeSort_split(nums, mid + 1, end);
//
//    __mergeSort_merge(nums, start, mid, end);
//}
//
//void __mergeSort_merge(int nums[], int start, int mid, int end) {
//    int* buffer = (int*)malloc((end - start + 1) * sizeof(int));
//    int cur_left = start;
//    int cur_right = mid + 1;
//    int cur_buffer = 0;
//
//    while (cur_left <= mid && cur_right <= end) {
//        if (nums[cur_left] <= nums[cur_right]) {
//            buffer[cur_buffer++] = nums[cur_left++];
//        }
//        else {
//            buffer[cur_buffer++] = nums[cur_right++];
//        }
//    }
//
//    // only one of the two "while" code blocks will be executed
//    while (cur_left <= mid) {
//        buffer[cur_buffer++] = nums[cur_left++];
//    }
//    while (cur_right <= end) {
//        buffer[cur_buffer++] = nums[cur_right++];
//    }
//
//    for (int i = 0; i < cur_buffer; i++) {
//        nums[start + i] = buffer[i];
//    }
//
//    free(buffer);
//}
//

