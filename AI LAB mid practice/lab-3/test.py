keys = ["name", "age", "city"]
values = ["Ali", 20, "Lahore"]

def create_dict(keys, values):
    new={}
    for i in range (3) :
        new[keys[i]] = values[i]
    print(new)
        

create_dict(keys, values)



