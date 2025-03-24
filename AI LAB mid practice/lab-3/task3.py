dict1 = {'a': 5, 'b': 10, 'c': 15}
dict2 = {'b': 20, 'c': 25, 'd': 30}
result ={}


for i in dict1:
    if i in dict2:
        result[i]=dict1 + dict2
    else:
        result[i]=dict1
for i in dict2:
    if i not in dict1:
        result[i]=dict2
    
print(result)