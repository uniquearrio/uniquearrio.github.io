def extractData(filename):
    infile=open(filename,'r')
    infile.readline()
    infile.readline()
    months=[]
    rainfall=[]
    for line in infile:
        word=line.split()
        print(word)

extractData('rainfall.dat')