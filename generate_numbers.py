from random import random

with open("numbers.txt", "w") as fp:
    for i in range(0, 10000000):
        fp.write("%d\n" % (random() * 1000000))
