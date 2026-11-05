import { Trash2 } from "lucide-react";
import type { Todo } from "../types/todo";


interface TodoItemProps {
    todo: Todo;
    onCompletedChage: (id: number, completed: boolean) => void;
    onDelete: (id: number) => void;
}


const TodoItem = ({todo, onCompletedChage, onDelete}: TodoItemProps) => {
  return (
    <div className="flex items-center gap-1">
        <label className="flex items-center gap-2 border-2 rounded-md p-2 border-gray-200 bg-white hover:bg-slate-50 grow">
            <input 
                type="checkbox" 
                checked = {todo.completed}
                onChange={(e) => onCompletedChage(todo.id, e.target.checked)}
                className="scale-125"
            />
            <span className={todo.completed ? "line-through text-slate-400" : ""}>
                {todo.name}
            </span>
        </label>

        <button 
            className="p-2"
            onClick={() => onDelete(todo.id)}
        > 
            <Trash2 size={20} className="text-gray-500" />
        </button>
    </div>
  )
}

export default TodoItem