import {useState, useEffect, useEffectEvent} from 'react'
import AutoSaveForm from './AutoSaveForm';

const App = () => {

  const [count, setCount] = useState(0);

  const onTick = useEffectEvent(() => {
      console.log("Count: ", count);
      setCount(prev => prev + 1);
    }
  )

  useEffect(() => {
    const intervalId = setInterval(() => {
      onTick();
    }, 2000);
    return () => clearInterval(intervalId);
  })

  return (
    <div>
      <h1>Tick: {count}</h1>

      <AutoSaveForm/>
    </div>
  )
}

export default App