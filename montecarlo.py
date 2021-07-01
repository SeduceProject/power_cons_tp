from random import random
import sys


def pi(itNb):
    inCircle = 0
    for i in range(itNb):
        x = random()
        y = random()
        if x * x + y * y < 1:
            inCircle += 1
    val = inCircle / (itNb - 1)
    val *= 4
    return val


nbIteration = int(sys.argv[1])
print("Valeur de Pi    : 3,141592653589793238462643383279")
print("Valeur calculee : %s apres %d iterations" % (pi(nbIteration), nbIteration))
