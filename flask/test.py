from flask import Flask, render_template, request, url_for, redirect
from markupsafe import escape

# WSGI Application
app = Flask(__name__)


# @app.route("/")
# def hello_world():
#     return "<p>Hello, World!!!</p>"


# @app.route("/<name>")
# def hello(name):
#     return f"Hello, {escape(name)}"


# @app.route("/projects/")
# def projects():
#     return "The project page"


# @app.route("/about/")
# def about():
#     return "The about page"

# # variable rules
# @app.route("/user/<username>")
# def show_user_profile(username):
#     return f"User {escape(username)}"

# @app.route("/post/<int:post_id>")
# def show_post(post_id):
#     return f"Post {post_id}"

# @app.route("/path/<path:subpath>")
# def show_subpath(subpath):
#     return f"Subpath {subpath}"

# # URL Building
# @app.route("/")
# def index():
#     return 'index'

# @app.route("/login")
# def login():
#     return 'login'

# @app.route("/user/<username>")
# def profile(username):
#     return f"{username}'s profile"

# with app.test_request_context():
#     print(url_for('index'))
#     print(url_for('login'))
#     print(url_for('login', next='/'))
#     print(url_for('profile', username="John Doe"))


# # HTTP methods
# @app.route("/login", methods=['GET', 'POST'])
# def login():
#     if request.method == 'POST':
#         return 'post'
#     if request.method == 'GET':
#         return 'GET'

# Rendering Templates

# @app.route("/hello")
# @app.route("/hello/<name>")
# def hello(name=None):
#     return render_template('hello.html', name=name)


# with app.test_request_context('/hello', method='POST'):
#     # now you can do something with the request until the
#     # end of the with block, such as basic assertions:
#     assert request.path == '/hello'
#     assert request.method == 'POST'


# Building URL Dynamically
# Variable Rules and URL Building

@app.route("/")
def welcome():
    return "Hey, I'm dharmik"

@app.route("/success/<int:score>")
def success(score):
    return f"<html><body><h1f>The Person has passed and the marks is {score}</h1f></html></body>"

@app.route("/fail/<int:score>")
def fail(score):
    return f"The Person has failed and the marks is {score}"

@app.route("/results/<int:marks>")
def result(marks):
    result = ""
    if marks < 50:
        result = "fail"
    else:
        result = "success"
    return redirect(url_for(result, score=marks))

# You can direct run file from terminal and server will run like python main.py
# instread of flask --app main run --debug
if __name__ == "__main__":
    app.run(debug=True)
