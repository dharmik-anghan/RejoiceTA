import requests

BASE = "http://127.0.0.1:5000/"

response = requests.post(BASE + "/video/1", {"likes": 22})

print(response.json())