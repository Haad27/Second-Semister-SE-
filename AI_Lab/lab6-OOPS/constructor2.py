class CakeFactory:
    def __init__ (self, flavour,size):
        self.falvour=flavour
        self.size = size
    def value(self):
        print(f"the cake flavour is {self.falvour} and size is {self.size}")
        
cake1 = CakeFactory("brown" , 23)
cake1.value()
cake2 = CakeFactory ("white ", 34)
cake2.value()
