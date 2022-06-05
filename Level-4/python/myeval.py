
s = '4+5'
r = eval(s)
print(r)

s="[1,2,3]+[4,5]"
print(type(s))
r=eval(s)
print(r)

s="hello world'"
r=eval(s)
print(r)

s="r=1+1"
exec(s)
print(r)
