import sys

def setio(s):
    input=sys.stdin.readline
    if s:
        sys.stdin=open(s+'.in','r')
        sys.stdout=open(s+'.out','w')
    

