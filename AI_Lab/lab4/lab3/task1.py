sentence = input("Enter a sentence: ")
book={}

word = sentence.lower().split()
count = 0
for i in word :
    for j in word:
       if (i == j):
           count = count + 1   
    book[i] = count

    count = 0  

book.pop("the",None)
book.pop("a", None)
book.pop("is", None)
book.pop("am", None)
book.pop("and", None)
print(book)
