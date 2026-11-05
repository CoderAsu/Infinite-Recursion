import { useState, useEffect } from "react"
import "./App.css"
import ExpenseForm from "./ExpenseForm"
import ExpenseList from "./ExpenseList"


const App = () => {

  const [expenses, setExpenses] = useState(() => {
    const saveData = localStorage.getItem("expenses");
    return saveData ? JSON.parse(saveData) : [];
  })

  useEffect(() => {
    localStorage.setItem("expenses", JSON.stringify(expenses))
  }, [expenses])

  const addExpense = (expense) => {
    setExpenses((preval) => [...preval, expense])
  }

  const deleteExpense = (id) => {
    setExpenses((prev) => 
      prev.filter((item) => item.id != id)
    )
  }

  const totalExpenses = expenses.reduce((sum, item) => sum + item.amount, 0);

  return (
    <div className="app-container">
      <h1>💰 Expense Tracker</h1>
      <ExpenseForm onAddExpense = {addExpense} />
      <h3 className="total">Total Expense: ₹{totalExpenses.toFixed(2)}</h3>
      <ExpenseList expenses = {expenses} onDelete = {deleteExpense} />
    </div>
  )
}

export default App