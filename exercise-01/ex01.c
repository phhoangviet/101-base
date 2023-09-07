/*
    1. Tính tổng của các phần tử trong mảng đã cho và in ra giá trị tổng các phần tử trong mảng
    - Tạo biến sumAll
    2. Tính tổng các phần tử có giá trị lẻ trong mảng đã cho và in ra giá trị đó
    - Tạo biến sumOdd
    3. Tính tổng các phần tử có giá trị chẵn trong mảng đã cho và in ra giá trị đó
    - Tạo biến sumEven
*/

int main()
{
    int a[] = {5, 9, 2, 3, 1, 123, 23, 4, 2, 9, 10, 0, 23, 9, 7, 6, 5};

    // Code here

    int size = sizeof(a) / sizeof(a[0]);
    int sumAll = 0;
    for (int i = 0; i < size; i++) {
        sumAll += a[i];
    }
    printf("sum: %d/n", sumAll);
    


    int sumOdd = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 1) {
            sumOdd += a[i];

        }
    }
    printf("sumOdd: %d/n", sumOdd);


    int sumEven = 0 ;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            sumEven += a[i];

        }
    }
    printf("sumEven: %d/n", sumEven);
       return 0;
        
}