sentence = input("Enter a sentence: ")
words = sentence.split()

# Create a dictionary to store word counts
word_count = {}
current_number = 1

# First pass: count unique words and assign numbers
for word in words:
    if word not in word_count:
        word_count[word] = current_number
        current_number += 1

# Print words with their assigned numbers
for word in words:
    print(f"{word_count[word]}.{word}", end=' ')