def fact(x):
    r = 1;
    for i in range(1, x + 1):
        r *= i
    return r

def bc(n, m):
    return fact(n) // (fact(m) * fact(n - m));

def pj(j, n = 5, p = 1/4):
    return bc(n, j) * (p) ** j * (1 - p) ** (n - j);


