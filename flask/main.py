# Integrate HTML with Flask
# HTTP verb GET and POST
from flask import Flask, render_template, request, url_for, redirect
from markupsafe import escape

# WSGI Application
app = Flask(__name__)


@app.get("/")
def welcome():
    return render_template("index.html")


@app.route("/result/<int:score>")
def result(score):
    res = ""
    if score >= 50:
        res = "PASS"
    else:
        res = "FAIL"
    return render_template("result.html", result=res)


# Resylt checker html page
@app.route("/submit", methods=["POST", "GET"])
def submit():
    total_score = 0

    if request.method == "POST":
        science = float(request.form["science"])
        maths = float(request.form["maths"])
        c = float(request.form["c"])
        datascience = float(request.form["datascience"])

        total_score = (science + maths + c + datascience) / 4

    return redirect(url_for("result", score=total_score))


# You can direct run file from terminal and server will run like python main.py
# instread of flask --app main run --debug
if __name__ == "__main__":
    app.run(debug=True)
