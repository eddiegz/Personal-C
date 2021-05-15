infile=open('tagin.txt','r')
outfile=open('tagout.txt','w')
n,m=map(int,infile.readline().split())

def binarySearch (arr, l, r, x):
    if r >= l:
        mid = l + (r - l) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
        else:
            return binarySearch(arr, mid + 1, r, x)
    else:
        return -1

list1=[1]
list2=[2]
for i in range(m):
    a,b=map(int,infile.readline().split())
    if binarySearch(list1,0,len(list1)-1,a)!=-1:
        list1.append(b)
    else:
        list2.append(b)
outfile.write(str(str(len(list1))+' '+str(len(list2))))
