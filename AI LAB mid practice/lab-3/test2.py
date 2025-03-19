sentence = "apple banana apple orange banana apple"
result = {}
words = sentence.split()
for i in words:
    count = 0
    for j in words:
        if i == j:
            count += 1
    result[i] = count
            
print(result)