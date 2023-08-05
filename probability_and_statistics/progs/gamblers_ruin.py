def gr(i, p = 1/2, k = 100):
    if (p == 1/2):
        return i / k;
    c = (1 - p) / p;
    return (c ** i - 1) / (c ** k - 1);
