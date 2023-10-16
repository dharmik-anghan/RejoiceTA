def find_words(txt: str):
    word_count = 1
    for i in range(len(txt)):
        if txt[i] == " " and txt[i+1] != " ":
            word_count+=1
    return word_count

with open('sample.txt', 'r') as f:
    text = f.read()
    print(find_words(text))
    