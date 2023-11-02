from flask import Flask
from flask_restful import Api, Resource, reqparse, abort

app = Flask(__name__)
api = Api(app)

parser = reqparse.RequestParser()
parser.add_argument("username", required=True, help="enter user name and password")
parser.add_argument("password", required=True, help="enter user name and password")

parser_copy  = parser.copy()
parser_copy.add_argument("full_name", required=True, help="hey, what's your full name?")


user_data = {
    "dharmik" : {"password": "dharmik123"},
    "ishi" : {"password": "ishi123"},
    "deksha": {"password": "deksha123"}
}
def abort_if_user_dosent_exists(username):
    if username not in user_data:
        abort(404, message="User not found")

class Login(Resource):
    def get(self):
        args = parser.parse_args()
        abort_if_user_dosent_exists(args["username"])
        user = user_data[args["username"]]
        if user:
            if args["password"] == user["password"]:
                return {"msg": "login successfull"}
        
        return {"msg": "wrong password"}
    
class LoginCopy(Resource):
    def get(self):
        args = parser_copy.parse_args()
        abort_if_user_dosent_exists(args["username"])
        user = user_data[args["username"]]
        
        if user:
            if args["password"] == user["password"]:
                return {"msg": "login successfull", "full_name": args["full_name"], "username": args["username"],}
        
        return {"msg": "wrong password"}
    
        

api.add_resource(Login, "/login")
api.add_resource(LoginCopy, "/logincopy")

if __name__ == "__main__":
    app.run(debug=True)