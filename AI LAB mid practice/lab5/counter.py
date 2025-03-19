sentence = "hello how are you "
result = {}
count =0
def count (sentence):
    for i in sentence:
        count =0
        for j in sentence:
            if i==j:
                count = count +1
                result[i]=count
    print (result)
            
count(sentence)