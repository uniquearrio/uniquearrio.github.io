def F(C):
    return (9.0/5)*C +32

a=10  #F(10)
F1=F(a)
print('F1: ',F1)
temp=F(15.5)
F2=F(a+1)
print('Temp and F2: ',temp,F2)
sum=F(10)+F(15)
Flist=[F(C) for C in [0,10,12]]
print(Flist,sum)