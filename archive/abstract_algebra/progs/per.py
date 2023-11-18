for i in range(7, 41):
    print(i, end=': ');
    sum = 0
    for j in range(1, i):
        d = i % j
        if (d == 0):
            sum += j;
            print(j, end=', ');
    print("sum: ", sum, end='');
    if (sum == i):
        print(" PERFECT", end='');
    print();

    
