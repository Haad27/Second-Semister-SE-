name = {"haad": 23, "ahmed": 34}
name2 = {"shayyan": 245, "ali": 24}
name3 = {"shahid": 245, "ali": 24}

names={}

names = {**name, **name2, **name3}

print(names)
