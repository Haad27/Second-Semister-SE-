names = {"haad": 23, "ahmed": 34, "shayyan": 245, "ali": 24, "shahid": 245}


name = list(names.items())

for i in range(len(name)):
    for j in range(len(name) -1):
        if name[j][1] < name[j+1][1]:
            name[j],name[j+1]=name[j+1],name[j]
            
            
print (name)