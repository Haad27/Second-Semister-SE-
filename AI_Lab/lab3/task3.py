d = {'a': 1, 'b': 4, 'c': 4, 'd': 2, 'e': 5}
n = 2

sorted_items = sorted(d.items(), key=lambda x: x[1], reverse=True)
result = {}
last_value = None

for key, value in sorted_items:
    if len(result) < n or value == last_value:
        result[key] = value
        last_value = value
    else:
        break

print(result)
