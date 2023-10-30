# Sentence Reverser: Write a function to reverse the order of words in a sentence.

def revSentence(string:str):
    return string[::-1].strip()

revStr = revSentence('   dha  rmik  ')
print(revStr)