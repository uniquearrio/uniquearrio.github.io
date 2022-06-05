count=sum=0
while count<5:
    val=float(input('Enter a number: '))
    if val<0:
        print('Negative number unacceptable, Terminating.....!')
        break
    count +=1
    sum += val
else:
    print('Average: ', sum/count)