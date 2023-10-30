# Word Frequency Counter: Count the frequency of words in a given text document.

def countFreqofWord(string:str):
    countDict = {}

    for char in string.lower():
        if char.isalpha(): 
            count = countDict.get(char,0) + 1
            countDict[char] = count

    print(countDict)

countFreqofWord("dharmikks")