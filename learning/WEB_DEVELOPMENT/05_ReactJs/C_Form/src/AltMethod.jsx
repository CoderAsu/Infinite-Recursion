import {useRef} from 'react'

const AltMethod = () => {
    const nameRef = useRef("")
    const emailRef = useRef("")

    const formStyle = {
        padding: "22px",
        margin: "10px",
        border: "1px solid black",
        display: "flex",
        flexDirection: "column",
        height: "100px",
        width: "max-content",
        gap: "16px"
    }

    function handleSubmit(e){
        e.preventDefault()
        console.log("Name:", nameRef.current.value)
        console.log("Email:", emailRef.current.value)
    }

  return (
    <div>
        <form action="" style={formStyle} onSubmit={handleSubmit}>

                <div>
                    <label htmlFor="name">User Name: </label>
                    <input 
                        type="text" 
                        id='name' 
                        ref = {nameRef}
                    />
                </div>

                <div>
                    <label htmlFor="email">Email: </label>
                    <input 
                        type="text" 
                        id='email' 
                        ref={emailRef}
                        size = '25' 
                    />
                </div>

                <input type="submit" />
            </form>
    </div>
  )
}

export default AltMethod