sentence = input("Enter a sentence: ")
book = {}
word = sentence.lower().split()
count = 0
for i in word :
    for j in word :
        if i == j :
            count += 1
    book[i] = count
    count = 0


print(book)
for i in word :
