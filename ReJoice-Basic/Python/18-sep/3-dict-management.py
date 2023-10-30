# 3. **Dictionary Management**
#   Develop a dictionary where keys are words, and values are their frequencies in a given text.

string = "dharmikk"

freq_counter = {}

for char in string:
    if char in freq_counter:
        freq_counter[char] += 1
    else:
        freq_counter[char] = 1

print(freq_counter)