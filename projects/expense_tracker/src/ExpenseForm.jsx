import {useState, useEffect, useRef} from 'react'

const ExpenseForm = ({onAddExpense}) => {
    const [title, setTitle] = useState("");
    const [amount, setAmount] = useState("");
    const titleRef = useRef();

    function handleSubmit(e){
        e.preventDefault();

        if(!title || !amount){
            return alert("Please fill all the fields!");
        }

        const newExpense = {
            id: Date.now(),
            title,
            amount: parseFloat(amount)
        }

        onAddExpense(newExpense);
        setTitle("");
        setAmount("");
        titleRef.current.focus();
    }

  return (
    <div>
        <form onSubmit={handleSubmit} className="expense-form">
        <input 
            placeholder="Expense Title" 
            type="text" 
            value={title} 
            onChange={(e) => setTitle(e.target.value)}
            ref = {titleRef}
        />
        <input 
            placeholder="Amount ₹" 
            type="text" 
            value={amount} 
            onChange={(e) => setAmount(e.target.value)}

        />
        <button type="submit">Add Expense</button>
      </form>
    </div>
  )
}

export default ExpenseForm