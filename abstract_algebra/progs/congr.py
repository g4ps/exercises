def m_gcd(a, b, vis=False):
    gcd(a, b, vis);
    return p_gcd(a, b);

def euler(a):
    sum = 0;
    for i in range(1, a + 1):
        if (gcd(i, a) == 1):
            sum += 1;
    return sum;

def gcd (a, b, vis=False):
    if (vis) :
        print("(", a, ", ", b, ") = ", end='');
    if (b == 0):
        if (vis):
            print(a);
        return a;
    return gcd(b, a%b, vis);

def lcm (a, b):
    d = gcd(a, b)
    return (a // d) * (b // d) * d;


def p_gcd(a, b, m1 = [1, 0], m2 = [0, 1]):
    # print(a, b, m1, m2);
    if (b == 0):
        return (a, m1);
    return p_gcd(b, a%b, m2, [m1[0] - (m2[0] * (a//b)), m1[1] - (m2[1] * (a//b))]);
    

def congr(a, b, n):
    d = gcd(a, n);
    if (b % d != 0):
        return [];
    a1 = a // d;
    b1 = b // d;
    m = n // d;
    c = (p_gcd(a1, m)[1][0]) % m;
    cb1 = (c * b1) % m;
    res = []
    for i in range(d):
        res += [cb1 + m * i];
    return res;

def is_prime(n):
    for i in range(2, n):
        if (n % i == 0):
            return False;
    return True;

def prime_decomp(n):
    ret = [];
    while(n != 1):
        for i in range(2, n + 1):
            if is_prime(i) and n % i == 0:
                ret += [i];
                n = n // i;
                break;
    return ret;

inp = [
    [4, 1, 7],
    [2, 1, 9],
    [5, 1, 32],
    [19, 1, 36],
    [10, 5, 21],
    [10, 5, 15],
    [10, 4, 15],
    [10, 4, 14],
    [20, 12, 72],
    [25, 45, 60],
    [8, 0, 12],
    [7, 0, 12],
    [21, 0, 28],
    [12, 0, 18],
]

for i in inp:
    print(i[0], "x <eq> ", i[1], "(mod ", i[2], ") = ", congr(i[0], i[1], i[2]));


# inp_trial = [
#     ["lambda x: x ** 2, 1, 16]", lambda x: x ** 2, 1, 16],
#     ["lambda x: x ** 3, 1, 16]", lambda x: x ** 3, 1, 16],
#     ["lambda x: x ** 4, 1, 16]", lambda x: x ** 4, 1, 16],
#     ["lambda x: x ** 8, 1, 16]", lambda x: x ** 8, 1, 16],
#     ["lambda x: x ** 3 + 2 * x + 2, 0, 5]", lambda x: x ** 3 + 2 * x + 2, 0, 5],
#     ["lambda x: x ** 4 + x ** 3 + x**2 + x + 1, 0, 2]", lambda x: x ** 4 + x ** 3 + x**2 + x + 1, 0, 2],
#     ["lambda x: x ** 4 + x ** 3 + 2 * x**2 + 2 * x + 1, 0, 3]", lambda x: x ** 4 + x ** 3 + 2 * x**2 + 2 * x + 1, 0, 3],
# ]

def trial(func, ans, m):
    ret = []
    for i in range(m + 1):
        if func(i) % m == ans:
            ret += [i];
    return ret;

# for i in inp_trial:
#     print(i[0], "=", trial(i[1], i[2], i[3]))

# inp_ya = [
#     [20, 13],
#     [69, 372],
#     [792, 275],
#     [11391, 5673],
#     [1761, 1567],
#     [507885, 60808]
#     ]

# for i in inp_ya:
#     d = gcd(i[0], i[1]);
#     m = lcm(i[0], i[1]);
#     coef = p_gcd(i[0], i[1])[1];
#     print(f"gcd: %3d; lcm: %10d, %d * %d + %d * %d = %d" % (d, m, coef[0], i[0], coef[1], i[1], d));


# for i in range(1, 31):
#     print(f"phi(%d) = %d"%(i, euler(i)));
