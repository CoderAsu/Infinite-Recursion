import { useMemo, useState } from "react";


const WithUseMemo = () => {

    const [count, setCount] = useState(0);

    const expensiveCalculation = (num) => {
        console.log("Running expensive calculation...");

        let total = 0;
        for(let i = 0; i < 100000000; i++){
            total += i;
        }

        return total + num;
    }

    const result = useMemo(() => expensiveCalculation(count), [])



  return (
    <div>
        <h2>Result: {result}</h2>
        <button 
            onClick={() => setCount(count + 1)}
        
        
        >
            Increase Count
        </button>
        <h2>Count: {count}</h2>
    </div>
  )
}

export default WithUseMemo