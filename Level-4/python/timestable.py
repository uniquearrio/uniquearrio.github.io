size=int(input('Enter table size: '))

print(end='     ')
for i in range(1,size+1):
    print('{0:4}'.format(i),end='')
print(end='\n   +')
for i in range(1,size+1):
    print(end='----')
print()

for row in range(1,size+1):
    print('{0:3}'.format(row),end=' |')
    for column in range(1,size+1):
        product = row * column
        print ('{0:4}'.format(product),end='')
    print()