import { useState } from "react"

interface AddTodoFormProps {
    onSubmit: (title: string) => void;
}

const AddTodoForm = ({onSubmit}: AddTodoFormProps) => {
    const [input, setInput] = useState("");

    function handleSumbit(e:React.FormEvent<HTMLFormElement>){
        e.preventDefault();

        if(!input.trim()) return; 

        onSubmit(input);
        setInput("");
    }

  return (
    <form className="flex" onSubmit={handleSumbit}>
        <input 
            type="text" 
            value={input}
            onChange={(e) => setInput(e.target.value)}
            placeholder="What needs to be done?"
            className="rounded-s-md border-y-2 border-s-2 grow p-2 outline-none border-gray-600"
        />

        <button
            type="submit"
            className="w-16 rounded-e-md bg-slate-900 text-white hover:bg-pink-400"
        >
            Add
        </button>
    </form>
  )
}

export default AddTodoForm