dict1 = {'a': 5, 'b': 10, 'c': 15}
dict2 = {'b': 20, 'c': 25, 'd': 30}
result = {}

for i in dict1:
    if i in dict2:
        result[i] = dict1[i] + dict2[i]
    else:
        result[i] = dict1[i]
for key in dict2:
    if key not in dict1:
        result[key] = dict2[key]

print(result)