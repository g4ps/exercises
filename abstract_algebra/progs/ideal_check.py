def get_units(n):
    ret = []
    for i in range(1, n):
        for j in range(1, n):
            if (i * j) % n == 1:
                ret.append(i)
    return ret

def get_non_units(n):
    ret = []
    units = get_units(n)
    for i in range(0, n):
        if i not in units:
            ret.append(i)
    return ret

def get_ideal(e, n):
    ret = []
    for i in range(n):
        j = (i * e) % n
        if (j not in ret):
            ret.append(j)
    ret.sort()
    return ret

def get_ideals(n):
    r = []
    for i in range(n):
        r.append(get_ideal(i, n))
    return r

def check_for_satisfaction(n):
    ideals = get_ideals(n)
    units = get_units(n)
    for i in range(n):
        for j in range(i + 1, n):
            are_ideals_equal = ideals[i] == ideals[j]
            satisf = False
            if (are_ideals_equal and i not in units and j not in units):
                for u in units:
                    if (i == (u * j) % n):
                        satisf = True
                        break
            else:
                 satisf = True       
            if (not satisf):
                print(i, j)
            
                        
