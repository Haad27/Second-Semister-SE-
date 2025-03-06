def name (x,y,z):
    print ("hello ", x,y,z)
name(z="ahmed" , y = "wali" , x ="pali") #here argument doesnt matter 
name("ali" , "wali" , "pali") #here argument doesnt matter 

# positional 
# keywords ///positiond oesnt matter 

def name(*name):
    print("hello " , name[0],name[1],name[2])
name("x","y","z")

def name (**name):
    print("hello " , name["x"],name ["y"] , name["z"])

name (x="ali" ,y="ahmed",z="mihammad")

def desciribe (aniaml,name):
    print(f"my {aniaml} name is {name}")

desciribe("cat","robber")

add= lambda x , y : x+y
x = 5
y = 3
print(add(x,y))