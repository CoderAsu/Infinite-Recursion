import { useCallback, useState } from "react"
import Parent from "./Parent";

const App = () => {

  const [count, setCount] = useState(0);

  let increment = useCallback(() => {
    setCount((prev) => prev + 1);
  }, [])

  
  return (
    <div>
      <h1>Count: {count}</h1>
      <button onClick={increment}>Increase Count</button>

      <Parent />
    </div>
  )
}

export default App