original = {"a": 1, "b": 2, "c": 3}
result = {}
for key, value in original.items():
    print(f"Key: {key}, Value: {value}")
    result[value]=key
    
print(result)