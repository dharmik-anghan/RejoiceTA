# Social Media Analytics: Analyze a list of posts and comments to find the most common words and sentiments used.
from textblob import TextBlob

comments = [
    "This is Good picture", 
    "This is bad", 
    "You are not like her", 
    "stop should making music, you are bas as shit,bad", 
    "you are underated artist, you need more attention in scean", 
    "have fun bro"
]

for comment in comments:
    views = TextBlob(comment)
    senti = views.sentiment.polarity
    if  senti >= 0.4:
        print("Positive")
    elif senti <= -0.4:
        print("Negative")
    else:
        print("Neutral")

