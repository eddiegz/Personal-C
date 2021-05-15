dic={'a':0,'r':0,'d':0,'v':0,'k':0}
f=open('input.txt')
for i in f:
  li=i.lower()
  dic['a']+=li.count('a')
  dic['r']+=li.count('r')
  dic['d']+=li.count('d')
  dic['v']+=li.count('v')
  dic['k']+=li.count('k')
print(dic)