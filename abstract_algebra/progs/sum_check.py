def am (p, m, n):
    ret = 1
    for i in range(p ** n):
        ret *= (p ** n * m - i)
    return ret

def max_power(p, x):
    ret = 0
    while (x % p ** (ret + 1) == 0):
        ret += 1
    return ret

def raw(p, n, m):
    return max_power(p, am(p, m, n))

def hyp(p, n, m):
    return max_power(p, m) + (p ** n - 1) / (p - 1)
