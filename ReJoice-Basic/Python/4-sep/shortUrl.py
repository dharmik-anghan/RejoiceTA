import pyshorteners

longUrl = "https://www.youtube.com/watch?v=IROWl4jDpAU&list=RDOKPAPX_fGVw&index=24"

typeTiny = pyshorteners.Shortener()

shortUrl = typeTiny.tinyurl.short(longUrl)
 
print("The Shortened URL is: " + shortUrl)

