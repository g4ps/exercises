diceRolls = [];
for i in range(2, 13):
    diceRolls += [0];

for i in range(1, 7):
    for j in range(1, 7):
        diceRolls[i + j - 2] += 1;

diceProb = diceRolls.copy();

for i in range(2, 13):
    diceProb[i - 2] /= 36;

s = 0;
for i in [4, 5, 6, 8, 9, 10]:
    s += (diceProb[i - 2] ** 2) / (diceProb[i - 2] + diceProb[7 - 2] + diceProb[11 - 2]);

s += diceProb[7 - 2];
s += diceProb[11 - 2];

print(s);
