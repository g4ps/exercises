def get_divisors(x): # Get all the divisors of x 
    if (type(x) is not int):
        return -1
    if (x < 0):
        x = -x
    ret = []
    for i in range(1, x):
        if (x % i == 0):
            ret += [i]
    return ret

def eval_poly(p, x): # Eval polynomial p (lowest degrees first) with x
    r = 0
    for i in range(len(p)):
        r += p[i] * x ** i
    return r

def solve_poly_in_q(x): # Solve polynomial in Q (see abstract algebra book, ex. 5.17)
    a = get_divisors(x[0])
    b = get_divisors(x[-1])
    fracs = []
    for i in a:
        for j in b:
            fracs += [i / j]
            fracs += [-i / j]
    ret = []
    for i in fracs:
        if (abs(eval_poly(x, i)) < 0.001):
            ret += [i]
    return ret

inp_p = [-6, 11, 56, 62, 45]
ev = solve_poly_in_q(inp_p)

print(ev)
    

    
