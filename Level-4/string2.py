
from re import S
from unittest import result

str3="Berlin: 3.45 C at 4 PM"
mylist=str3.split(':')
print(mylist)
mylist1=str3.split()
print(mylist)
s="this is a string"
print(s[0:5])
print(s[-1])
print(s[:-3])
print(s[5:])

newstring=s.replace('string','table')
print(newstring,s)
mystring=s.split()
result=' '.join(mystring)
print(result)
check='this' in s
print(check)

index=s.find('a')
print(index)