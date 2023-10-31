from flask import Flask, request
from flask_restful import Api, Resource

app = Flask(__name__)
api = Api(app)

todos = {}

class ToDoList(Resource):
    def get(self, todo_id):
        return todos[todo_id]
    
    def post(self, todo_id):
        todos[todo_id] = request.form['data']
        return {todo_id: todos[todo_id]}
    
api.add_resource(ToDoList, "/<string:todo_id>")

if __name__ == '__main__':
    app.run(debug=True)