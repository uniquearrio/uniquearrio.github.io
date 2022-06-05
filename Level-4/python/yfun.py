def yfunc(t,v0):
    
    return v0*t + 0.5*g*t**2

def yfunc2(t):
    
    return v0*t + 0.5*g*t**2
v0=6  #global
g=9.81  #global
y1=yfunc(0.1,6)
y2=yfunc(0.1,v0=6)
y3=yfunc(t=0.1,v0=6)
y4=yfunc(v0=6,t=0.1)
y5=yfunc2(0.1)
print(y1,y2,y3,y4,y5)