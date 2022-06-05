print('Enter number to display and 999 to exit: ')
done=False
while not done:
    entry=int(input('Enter number: '))
    if entry==999:
        done=True
        print('Bye!')
    else:
        print(entry)