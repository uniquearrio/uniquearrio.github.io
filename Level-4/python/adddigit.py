num=int(input('Enter a number range from 0 to 9999: '))
if num<0:
    num=0
if num>9999:
    num=9999

print(end="[")
digit=num//1000
num%=1000
print(digit,end="")


digit=num//100
num%=100
print(digit,end="")


digit=num//10
num%=10
print(digit,end="")
print(num,end="]\n")