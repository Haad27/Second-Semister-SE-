data = {"a": 10, "b": 20, "c": 10, "d": 30, "e": 20, "f": 10}
lists = data.items()
reverses = reversed(lists)
result = dict(reverses)


print(result)
