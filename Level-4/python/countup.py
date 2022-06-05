count=0
entry='Y'
while entry!='N' and entry != 'N':
    print(count)
    entry=input("Enter 'Y' to continue or N to exit: ")
    if entry=='Y' or entry=='y':
        count += 1
    elif entry!='N' and entry!='n':
        print(entry, ' is nat a valid entry!')