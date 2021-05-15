name,temp=input().split()
dic={}
dic[name]=int(temp)
while name!='Waterloo':
    name,temp=input().split()
    dic[name]=int(temp)
minkey=min(dic,key=dic.get)
print(minkey)