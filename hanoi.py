import sys

nbMove = 0

def move(ndisks, fromm, via, to):
    if ndisks > 1:
        global nbMove
        nbMove += 1
        move(ndisks - 1, fromm, to, via)
        move(ndisks - 1, via, fromm, to)
 
nbDisks = int(sys.argv[1])
move(nbDisks, 1, 2, 3)
print("Nb of moves: %s" % nbMove)
