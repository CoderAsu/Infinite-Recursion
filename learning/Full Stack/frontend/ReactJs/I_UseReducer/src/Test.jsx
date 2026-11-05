import { useReducer } from "react";

const Test = () => {
    const [checked, toggle] = useReducer((checked) => !checked, false);

  return (
    <div>
        <input 
            type="checkbox" 
            checked = {checked}
            onChange={toggle}
       />

       {checked ? " checked" : " not checkbox"}
    </div>
  )
}

export default Test