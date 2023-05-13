def fact(n):
    k = 1;
    for i in range(1, n + 1):
        k *= i;
    return k;

# returns (i + 1)'th permutation of n
def perm_bijection(i, n):
    # checking for sanity
    if i < 0 or i > fact(n) - 1 or n < 0:
        return -1;
    left = [];
    for j in range(n):
        left += [j];
    #left = [0, ..., n - 1]
    ret = [];
    while n != 0:
        fn = fact(n - 1);
        k = i // fn;
        ret += [left[k]];
        left.remove(left[k]);
        i = i % fn;
        n -= 1;
    return ret;
        
