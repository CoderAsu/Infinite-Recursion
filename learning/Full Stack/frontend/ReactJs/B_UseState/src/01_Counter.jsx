import {useState} from 'react'
const Counter = () => {

    const [count, setCount] = useState(0);

    function increase(){
        setCount(count + 1);
    }

    function decrease(){
        setCount(count - 1);
    }

  return (
    <div>

        <p>Count: {count}</p>
        <button onClick = {increase} style = {{marginRight: "4px"}}>Increase</button>
        <button onClick = {decrease}>Decrease</button>

    </div>
  )
}

export default Counter


/*
    values of useState can be:
    1. String
    2. Number
    3. Boolean
    4. Array
    5. Object
*/