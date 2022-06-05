infile = open('data.txt','r')

while True:
    line = infile.readline()
    print(line)
    if not line:
        break
infile.close()