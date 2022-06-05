
pairs=[]
infile=open('xy.dat','r')
for line in infile:
    words=line.split()
    for word in words:
        word=word[1:-1]
        
        x,y=word.split(',')
        pair=(float(x),float(y))
        pairs.append(pair)
print(pairs)