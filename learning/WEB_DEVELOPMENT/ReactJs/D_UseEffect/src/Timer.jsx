import { useEffect, useState } from 'react'

const Timer = () => {

    const [sec, setSec] = useState(0);

    useEffect(() => {
        const interval = setInterval(() => {
            setSec((prev) => prev + 1);
        }, 2000);

        console.log("Component Re-rendered!");


        return () => {
            clearInterval(interval);
            console.log("Timer Cleared!");
        }
    }, [sec])

  return (
    <>
        <h2>Seconds: {sec} </h2>
    </>
  )
}

export default Timer