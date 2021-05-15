a,b = map(int,open("addin.txt", "r").readline().strip().split())

answer = a+b

outfile = open("addout.txt", "w")
outfile.write(str(answer))
outfile.close()
