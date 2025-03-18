dict1 = {'a': {'x': 1, 'y': 2}, 'b': [1, 2], 'c': 3}
dict2 = {'a': {'x': 3, 'z': 4}, 'b': [3, 4], 'd': 5}

merge = { **dict1 , **dict2 }

print(merge)