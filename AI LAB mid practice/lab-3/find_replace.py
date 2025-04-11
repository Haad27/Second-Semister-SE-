text = input("Enter a string: ")

position = text.find("a")
new_text = text.replace("a", "b")

print(f"Position of first 'a': {position}")
print(f"Text after replacing 'a' with 'b': {new_text}")
