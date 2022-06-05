formula=input('enter a function including x')
code="""def f(x):
    return %s
"""% formula
exec(code)
x=int(input('Enter value of x'))
print(f(x))