from msilib.schema import IniFile


infile=open('data.txt','r')
sum=0
count=0

for line in infile:
    count +=1
    sum+=float(line)
    print(line)

mean=sum/count
print('Total: ',sum,'Mean: ',mean)
infile.close()