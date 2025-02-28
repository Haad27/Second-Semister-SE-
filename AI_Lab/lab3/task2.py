dict1 = {'a': {'x': 1, 'y': 2}, 'b': [1, 2], 'c': 3}
dict2 = {'a': {'x': 3, 'z': 4}, 'b': [3, 4], 'd': 5}
merged = {}

for key in set(dict1) | set(dict2): 
    if key in dict1 and key in dict2:
        if isinstance(dict1[key], dict) and isinstance(dict2[key], dict):
            merged[key] = {**dict1[key], **dict2[key]} 
        elif isinstance(dict1[key], list) and isinstance(dict2[key], list):
            merged[key] = dict1[key] + dict2[key] 
        elif isinstance(dict1[key], (int, float)) and isinstance(dict2[key], (int, float)):
            merged[key] = dict1[key] + dict2[key]  
        else:
            merged[key] = dict2[key] 
    else:
        merged[key] = dict1.get(key, dict2.get(key)) 

print(merged)
