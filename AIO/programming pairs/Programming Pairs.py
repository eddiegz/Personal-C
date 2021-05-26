infile=open('pairsin.txt','r')
outfile=open('pairsout.txt','w')

def count_sort(arr):
    max_element = int(max(arr))
    min_element = int(min(arr))
    range_of_elements = max_element - min_element + 1
    count_arr = [0 for _ in range(range_of_elements)]
    output_arr = [0 for _ in range(len(arr))]
    for i in range(0, len(arr)):
        count_arr[arr[i]-min_element] += 1
    for i in range(1, len(count_arr)):
        count_arr[i] += count_arr[i-1]
    for i in range(len(arr)-1, -1, -1):
        output_arr[count_arr[arr[i] - min_element] - 1] = arr[i]
        count_arr[arr[i] - min_element] -= 1
    for i in range(0, len(arr)):
        arr[i] = output_arr[i]
    return arr

n,a,b=map(int,infile.readline().split())
list1=[int(i) for i in infile.readline().strip().split()]
list1=count_sort(list1)
answer=0
l,r=n-1,n-1
for i in range(n):
    l,r=max(l,i),max(r,i)
    while l>i and list1[i]+list1[l]>=a:
        l-=1
    while r>i and list1[i]+list1[r]>b:
        r-=1
    answer+=r-l

outfile.write(str(answer))
outfile.close()
