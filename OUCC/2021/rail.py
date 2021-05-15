line=[i for i in input()]
s1=''
s2=''
s3=''
s1=line[0::4]
s2=line[1::2]
s3=line[2::4]
print(''.join(s1+s2+s3))