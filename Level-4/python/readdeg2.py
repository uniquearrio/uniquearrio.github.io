
infile=open('deg2.dat','r')
temp={}
for line in infile.readlines():
    c,t=line.split()
    c = c[:-1]
    temp[c]=float(t)
print(temp)