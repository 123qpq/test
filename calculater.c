
int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int main()
{
    int x, y;
    int choice;

    printf("1:+, 2:-, 3:*, 4:/, 숫자를 선택해주세요 :\n");
    scanf("%d", &choice);

    printf("두 수를 입력하세요 :\n");
    scanf("%d %d", &x, &y);

    switch (choice)
    {
    case 1:
        printf("결과: %d \n", add(x, y));
        break;
    case 2:
        printf("결과: %d \n", minus(x, y));
        break;
    case 3:
        printf("결과: %d \n", multiply(x, y));
        break;
    case 4:
        printf("결과: %f \n", divide(x, y));
        break;
    }
    return 0;
}
