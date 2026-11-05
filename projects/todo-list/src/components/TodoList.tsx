import TodoItem from "./TodoItem";
import type { Todo } from "../types/todo";


interface TodoListProps {
    todos: Todo[];
    onCompletedChange: (id: number, completed: boolean) => void;
    onDelete: (id: number) => void;
}


const TodoList = ({todos, onCompletedChange, onDelete}:TodoListProps) => {

    

    return (
        <>
            <div className="space-y-2">
                {todos.map(todo => (
                    <TodoItem
                        key={todo.id}
                        todo={todo}
                        onCompletedChage={onCompletedChange}
                        onDelete={onDelete}
                    />
                ))}
            </div>

            {todos.length === 0 && (
                <p className="text-center text-sm text-gray-500">
                    No todos yet. Add a new one above.
                </p>
            )}
        </>
    )
}

export default TodoList