/*
    1. Tìm ước chung lớn nhất giữa 2 số a và b đã cho và in ra giá trị đó
    - Tạo biến ucln để giữ giá trị ucln
    2. Tìm bội chung nhỏ nhất giữa 2 số a và b đã cho và in ra giá trị đó
    - Tạo biến bcnn để giữ giá trị bcnn tính được
*/

// Hàm này tính giá trị ước chung lớn nhất của 2 số a và b và trả về giá trị UCLN
int calcUCLN(int a, int b)
{
    // Code here
    {
        int ucln;
        for (int i = 1; i <= a || i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                ucln = i;
            }
        }
        return ucln;
    }
    // return về giá trị UCLN vừa tính được
}

// Hàm này tính giá trị bội chung của 2 số a và b và trả về giá trị BCNN
int calcBCNN(int a, int b)
{
    // Code here
    int bcnn = (a * b)/ calcUCLN(a,b);
    
    // return về giá trị BCNN
    return bcnn;
}
int main()
{
    int a = 10;
    int b = 12;
    int ucln = calcUCLN(a, b);
    int bcnn = calcBCNN(a, b);

    // In ra giá trị ucln và bcnn

    printf("UCLN cua %d va %d la: %d\n", a, b, ucln);
    printf("BCNN cua %d va %d la: %d\n", a, b, bcnn);
    return 0;
}


