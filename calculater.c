
int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}
int divide(float x, float y) {
    return x / y;
}

int main()
{
    int x, y;
    int choice;
    
    while (1) {
        printf("1:+, 2:-, 3:*, 4:/, 숫자를 선택해주세요 :\n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            break;
        }

        printf("1~4의 숫자를 선택 해주세요.\n");
    }
    

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
        if (y == 0)
        {
            printf("0으로 나눌 수 없습니다.\n")
        }
        printf("결과: %f \n", divide(x, y));
        break;
    }
    return 0;
}
