/*
    1. Tìm phần tử có giá trị lớn nhất trong mảng đã cho và in ra giá trị đó

    2. Tìm phần tử có giá trị nhỏ nhất trong mảng đã cho và in ra giá trị đó
    - Nếu được in ra vị trí của phần tử đó trong mảng
*/
#include<stdio.h>
int main()
{
    int a[] = {8,
               -65,
               2,
               6,
               2,
               10,
               34,
               203,
               99,
               101,
               202};

    // Code here
    int size = sizeof(a) / sizeof(a[0]);


    int max = a[0];
    int min = a[0];
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }
    // in ra phan tu trong mang 
    printf("Phan tu lon nhat trong mang la: %d\n & %d\n", max, maxIndex);
    printf("Phan tu nho nhat trong mang la: %d\n & %d\n", min, minIndex);
    return 0;
}