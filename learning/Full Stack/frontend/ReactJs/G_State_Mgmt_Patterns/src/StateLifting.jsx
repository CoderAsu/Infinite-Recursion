import {useState} from 'react'

const StateLifting = () => {

    function Parent2(){
        const [text, setText] = useState("");

        return (
            <>
                <InputBox changeVal = {setText} />
                <h3>Typed: {text}</h3>
            </>
        )
    }

    function InputBox({changeVal}){
        return <input type='text' onChange={(e) => changeVal(e.target.value)}/>
    }

  return (
    <div>
        <Parent2 />
    </div>
  )
}

export default StateLifting