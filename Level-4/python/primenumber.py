print('Number from 10 to 19: ')
for num in range(10,20):
    for i in range(2,num):
        if num%i==0:
            j=num/i
            print("%d equal %d * %d" %(num,i,j))
            break
    else:
        print(num,' is prime')