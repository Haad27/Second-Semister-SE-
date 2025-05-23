class animal :
    def call (self ):
        print ("hello")
        
class dog (animal):
    def call (self):
        print ("hello")
        
        
a1 = animal()
d1 = dog()

d1.call()
a1.call()