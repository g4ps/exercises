
#cycle is a special notation used to describe an element of symmetric group
#symmetric group is defined to be a group of bijection $n \to n$, where $n \in Z_+$
#goto Dummit and Foote's Abstract algebra, 3rd ed, p. 1.3 for more details
# one thing left to mention: although in the normal operation of the cycles we
# omit the cycles with only one element, we don't do it in this program because it's
# less umbigous

# applies a value to a cycle
def apply_cycle(n, c):
    for i in c:
        if n in i:
            return i[(i.index(n) + 1) % len(i)];


# calculates the length of a cycle
def cycle_len(c):
    ret = 0;
    for i in c:
        ret += len(i);
    return ret

# calculates the composition of the two bijections in the cycle notation
def comp_cycle(c1, c2):
    clen = cycle_len(c1);
    if (cycle_len(c2) != clen):
        return -1;
    left = [];
    for i in range(1, clen + 1):
        left += [i];
    ret = [];
    tp = ();
    i = left[0];
    while(len(left) != 0):
        pr = i;
        if (len(tp) == 0):
            tp += (i, );
        r = apply_cycle(apply_cycle(i, c1), c2);
        if (r in tp):
            ret += [tp];
            tp = ();
            left.remove(pr);
            if (len(left) == 0):
                break;
            i = left[0];
        else:
            tp += (r, );
            i = r;
            left.remove(pr);
    return ret;


# syntactic sugar for comp_cycle
def cc(c1, c2):
    return comp_cycle(c1, c2);


# examples of cycles: the group S_3        
s1 = [(1,), (2,), (3,)];
s2 = [(1,), (2, 3)];
s3 = [(1, 2), (3,)];
s4 = [(1, 2, 3)];
s5 = [(1, 3, 2)];
s6 = [(1, 3), (2,)];

S3 = [s1, s2, s3, s4, s5, s6];

for i in range(len(S3)):
    print("C_{S_3}[", S3[i], "] = ", end="");
    for j in range(len(S3)):
        if (cc(S3[i], S3[j]) == cc(S3[j], S3[i])):
            print(S3[j], end=", ");
    print();


# USAGE
# comp_cycle(s1, s2) # and so on
