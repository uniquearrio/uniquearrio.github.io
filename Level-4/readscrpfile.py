

infile=open('Oxford.dat','r')
lines=infile.readline().split('\\r\\n')
#print(lines)
place=lines[0]
location=lines[1]
temp_info=lines[7:]
data={}
data['place']=place
data['location']=location
data['data']={}
#print(len(temp_info[0]))

for temp in temp_info:
    columns=temp.split()
    year=columns[0]
    month=columns[1]
    if columns[-1]=='Provisional':
        del columns[-1]
    for i in range(2,len(columns)):
        if columns[i][-1]=='*':
            columns[i]=columns[i][:-1]
        elif columns[i]=='---':
            columns[i]='None'
    tmax,tmin,air_frost,rain,sun=columns[2:]
    if not year in data['data']:
        data['data'][year]={}
    data['data'][year][month]={'tmax':tmax,'tmin':tmin,'air_frost':air_frost,'rain':rain,'sun':sun}

print(data['data']['2020']['1'])


