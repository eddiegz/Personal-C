list1=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
times=int(input())
output=[]
for i in range(0,times):
    line=input()
    #if line.isupper():
        #line=list1[len(line)*2].upper()+line
    #else:
        #line=list1[len(line)*2]+line
    result=(int(list1.index(line[2])+1)+int(list1.index(line[1])+1))/int(list1.index(line[0])+1)
    output.append(list1[int(result-1)]+line)
for i in output:
    print(i)