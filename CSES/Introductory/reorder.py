line=input()
dic={}
for i in line:
    if i not in dic:
        dic[i]=0
    dic[i]+=1
count=0
wrong=[]
for i in dic:
    if dic[i]%2!=0:
        count+=1
        wrong.append(i)
if count>=2:
    print('NO SOLUTION')
else:
    string=''
    if count==1:
        wr=wrong[0]
        special=dic[wr]
        for i in dic:
            if i!=wr:
                dic[i]//=2
                string+=i*dic[i]
        new=string+special*wr
        string=new+string[::-1]
        print(string)
    if count==0:
        for i in dic:
            dic[i]//=2
            string+=i*dic[i]
        print(string,end='')
        print(string[::-1])
        