int fun(int p)
{
    int q = p * p;
    return q;
}

int main()
{
    int a = 1, b = 2;
    int c = 3;
    int d[1][2];
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
    d[0][0] = 10;
    print(a);
    print(d[0][0]);
    print(fun(c));
    return 0;
}