import { useState } from "react";


const WithoutUseMemo = () => {

    const [count, setCount] = useState(0);

    const expensiveCalculation = () => {
        console.log("Running expensive calculation...");

        let total = 0;
        for(let i = 0; i < 100000000; i++){
            total += i;
        }

        return total;
    }


    const result = expensiveCalculation();

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

export default WithoutUseMemo