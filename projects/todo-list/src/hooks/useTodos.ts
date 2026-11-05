import { useEffect, useState } from "react";
import type { Todo } from "../types/todo";
import { dummyData } from "../data/todos";

export default function useTodos() {
    const [todos, setTodos] = useState(() => {
        const saveTodos: Todo[] = JSON.parse(localStorage.getItem("todos") || "[]");
        return saveTodos.length > 0 ? saveTodos : dummyData;
    });

    useEffect(() => {
        localStorage.setItem("todos", JSON.stringify(todos));
    }, [todos])

    function setTodoCompleted(id: number, completed: boolean) {
        setTodos((prevTodos) =>
            prevTodos.map((todo => (
                todo.id === id ? { ...todo, completed } : todo
            )))
        )
    }

    function addTodo(name: string): void {
        setTodos(prevTodos => [
            {
                id: Date.now(),
                name,
                completed: false
            },

            ...prevTodos,
        ])
    }


    function deleteTodo(id: number) {
        setTodos(prevTodos => prevTodos.filter(todo => todo.id !== id));
    }

    function deleteAllCompletedTodos() {
        setTodos(prevTodos => prevTodos.filter(todo => !todo.completed));
    }

    return{
        todos,
        setTodoCompleted,
        addTodo,
        deleteTodo,
        deleteAllCompletedTodos
    }
}