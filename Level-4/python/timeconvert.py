seconds = int(input('Enter seconds to caculate hr:min:sec '))
hr = seconds//3600
seconds = seconds%3600
min = seconds//60
sec = seconds%60
print (hr,':HR ',min,':MIN ',sec,':SEC ')