def isprime(x, verb=False):
    ret = True
    if (x <= 2):
        return True
    for i in range(2, x):
        if (x % i == 0):
            ret = False;
            if (not verb):
                return False
            print(i, end=", ");
    if (verb):
        print();
    return ret;

def gcd(x, y):
    if (y == 0):
        return x
    return gcd(y, x % y);

for i in range(1, 60):
    if (gcd(i, 60) == 1):
        print("(", i, ", 60) = ", gcd(i, 60));

primes = [];

for i in range(2, 1000):
    if (isprime(i)):
        primes += [i];
    
s1 = [];

for i in range(1, len(primes)):
    temp = 1;
    for j in range(i):
        temp *= primes[j];
    temp += 1;
    s1 += [temp]


for i in s1:
    if (not isprime(i)):
        print(i);
        isprime(i, verb=True);
        break;
