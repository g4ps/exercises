def both_tables(n):
    add_table(n);
    mult_table(n);
    
def add_table(n):
    op_table(n, "+");

def mult_table(n):
    op_table(n, "*");

def op_table(n, op):
    if (op == "+"):
        print("Addition table for", n);
    elif (op == "*"):
        print("Multiplication table for", n);
    print("   ", end='')
    for i in range(n):
        print (f"%2d " % i, end='');
    print();
    for i in range(n):
        print ("----", end='');
    print();
    for i in range(n):
        print (f"%2d:" % i, end='');
        for j in range (n):
            res = 0;
            if (op == '+'):
                res = i + j;
            elif (op == '*'):
                res = i * j
            print(f"%2d " % ((res) % n), end='');
        print();
    print();
    
both_tables(3);
both_tables(4);
both_tables(12);
