
sum=0
done=False
while not done:
    val = int(input('Enter positive number to add , 999 to quit! '))
    if val<0:
        print('Negative value ',val, ' Not cout! ')
        continue
    if val!=999:
        print('Tallying :',val)
        sum +=val
    else:
        break
print('Sum: ',sum)