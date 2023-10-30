from flask import Flask
from markupsafe import escape

app = Flask(__name__)


@app.route("/")
def hello_world():
    return "<p>Hello, World!!!</p>"

@app.route("/<name>")
def hello(name):
    return f"Hello, {escape(name)}"
# You can direct run file from terminal and server will run like python main.py
# instread of flask --app main run --debug
if __name__ == "__main__":
    app.run(debug=True)
