temps={'Oslo':13,'London':14.7,'Paris':15.2}
print(type(temps))
print(temps)
print(temps['London'])
print(temps.keys())
print(temps.values())

mydict=dict()
mydict['key1']='Yangon'
mydict['key2']='Mandalay'
print(mydict)

for city in sorted(temps):
    print(city,temps[city])

temps['Yangon']=35
print(temps)
temps['Oslo']=15
print(temps)
del temps['Yangon']
print(temps)
if 'London' in temps:
    print('London temperature is %s' %temps['London'])
else:
    print(temps['Yangon'])