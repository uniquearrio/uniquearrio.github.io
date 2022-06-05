infile=open('data.txt','r')
lines=infile.readlines()
print(lines)
print(type(lines))
sum=0
for line in lines:
    sum +=float(line)
mean=sum/len(lines)
print('Total: ',sum,'Mean: ',mean)
infile.close()