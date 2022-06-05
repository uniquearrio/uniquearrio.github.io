import random
class Animal:
    def __init__(self,name):
        self.name=name
    def eat(self,food):
        print('%s eats %s' %(self.name,food))
class Dog(Animal):
    def __init__(self,name):
        super(Dog,self).__init__(name)
        self.breed=random.choice(["GR","Terrier","Bull Dog"])
    def fetch(self,thing):
        print('%s fetch %s'%(self.name,self.breed,thing))
    def show_effection(self):
        print('%s wags tail '%(self.name))
class Cat(Animal):
    def play(self):
        print('%s play with string'%(self.name))
    def show_effection(self):
        print('%s purrs '%(self.name))
a=Animal('AungNet')
a.eat('Chicken rice')
d=Dog('GokeKyar')
d.eat('BBQ')
d.fetch("ball")
c=Cat('MIWat')
c.eat('Fried fish')
c.play()
d.show_effection()
c.show_effection()