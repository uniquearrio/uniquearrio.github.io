class Person:
    def ___init___(self,name,office=None,mobile=None,private=None,email=None):
        self.name=name
        self.office=office
        self.mobile=mobile
        self.private=private
        self.email=email
    def add_mobile_phone(self,mobile):
        self.mobile=mobile
    def add_office_phone(self,office):
        self.office=office
    def add_private_phone(self,private):
        self.private=private
    def add_email(self,address):
        self.email=address
    def dump(self):
        s = self.name +'\n'
        if self.mobile is not None:
            s += 'mobie Phone: '+ self.mobile + '\n'
        if self.office is not None:
            s+="private Phont: "+self.private +'\n'
        if self.email is not None:
            s += 'Email: '+ self.email
        print(s)
    def__str__(self):
        return self.name+' \n Phone:  '+self.mobile

p1=Person('Mg Mg','09123456789')
p1.add_mobile_phone('09779443650')
p1.add_private_phone('09456789123')
p1.add_email('lattzaw196@gamil.com')
print(p1.__dict__)
p1.dump()
print(p1)