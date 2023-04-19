def order(n):
    for i in range(n):
        f = True
        for j in range(1, 200):
            if ((i * j) % n == 0):
                print(f"ord (%d) = %d"%(i, j));
                f = False;
                break
        if (f):
            print(f"ord (%d) = %s"%(i, "inf"));

order(36)
