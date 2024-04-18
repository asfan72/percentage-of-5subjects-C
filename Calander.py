import calendar
class Check:
    def get(self,y,m):
        self.y=year
        self.m=month
class Show(Check):
    def cal(self):
        p=calendar.month(self.y,self.m)
        print(p)
year=int(input('Enter year'))
month=int(input('Enter month'))
o=Show()
o.get(year,month)
o.cal()
