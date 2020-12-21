int main()
{
    int li[1][2];
    int a = 1, b = 2;
    int c = 2;
    int i = 0;
    for (i = 0; i < 10; i = i + 1) {
        if (a < 5) a = a + 1;
        else if (a >= 5) {
            a = a + 2;
        }
    }
    while (a < 40) {
        a = a + 1;
    }
    print(a);
    return 0;
}