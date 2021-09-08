for _ in range(int(input())):
    a = list(map(int, input().split()))
    r, c0, c1 = input(), 0,0
    for x in r:
        c0 += (x == "0")
        c1 += (x == "1")
    print(a[1]*c0 + a[2]*c1)