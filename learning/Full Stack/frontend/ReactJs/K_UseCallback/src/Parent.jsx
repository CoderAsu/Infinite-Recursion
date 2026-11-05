import { useCallback, useState } from "react";
import Child from "./Child";
const Parent = () => {
    const [count, setCount] = useState(0);

    const handleClick = useCallback(() => {
        console.log("Button Clicked!");
    }, [])

  return (
    <div>
        <h2>Count: {count}</h2>
        <button onClick={() => setCount(prev => prev + 1)}>Increase</button>

        <Child click = {handleClick}/>
    </div>
  )
}

export default Parent