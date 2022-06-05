
class Date:
    def get_date(self):
        return '30-3-2022'
class Time(Date):
    def get_time(self):
        return '18:14'

dt=Date()
print("Call date menthod from date obj",dt.get_date())
tm=Time()
print('Call time method from time object',tm.get_time())
print("call date method from time obj",tm.get_date())