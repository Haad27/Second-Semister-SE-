class animal ():
    def name (self):
        return "haad"
    
    def spec(self):
        print ("animal")
        
class dog (animal):
    def spec(self):
        print(super().name())
        print ("dog")
        
class cat (animal):
    def spec(self):
        print(super().name())
        print ("cat")
        
a= animal()
d=dog()
c= cat()

a.spec()
d.spec()
c.spec()