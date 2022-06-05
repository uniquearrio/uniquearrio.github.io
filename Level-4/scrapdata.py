import urllib.request


user_agent = 'Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.9.0.7) Gecko/2009021910 Firefox/3.0.7'

baseurl = 'https://www.metoffice.gov.uk/pub/data/weather/uk/climate/stationdata'

filename= 'oxforddata.txt'

url = baseurl + '/' + filename


headers={'User-Agent':user_agent,} 


request=urllib.request.Request(url,None,headers) 
#The assembled request

response = urllib.request.urlopen(request)

data = response.read() 
# The data u need

file=open('Oxford.dat','w')

file.write(str(data))

file.close()