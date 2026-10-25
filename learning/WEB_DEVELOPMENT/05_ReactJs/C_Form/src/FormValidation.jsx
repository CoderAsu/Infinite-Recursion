import React, { useState } from 'react'

function FormValidation() {
    const [name, setName] = useState("")
    const [email, setEmail] = useState("")
    const [error, setError] = useState("")


    const formStyle = {
        padding: "22px",
        margin: "10px",
        border: "1px solid black",
        display: "flex",
        flexDirection: "column",
        height: "auto",
        width: "max-content",
        gap: "16px"
    }

    const handleSubmit = (e) => {
        e.preventDefault()
        
        if(!name || !email){
            setError("Please fill all the fields!")
        } else{
            console.log("Form Submitted:", {name, email})
            alert("Form submitted sucessfully")
        }
    }

    return (
        <div>
            <form action="" onSubmit={handleSubmit} style={formStyle}>
                <div>
                    <label htmlFor="name">Name: </label>
                    <input 
                        type="text" 
                        id='name'
                        value={name}
                        onChange={(e) => setName(e.target.value)}
                    />
                </div>

                <div>
                    <label htmlFor="email">Email: </label>
                    <input 
                        type="email" 
                        id='email' 
                        value={email}
                        onChange={(e) => setEmail(e.target.value)}
                    />
                </div>

                {error && <p style={{color: "red"}}>{error}</p>}

                <input type="submit" />

            </form>
        </div>
    )
}

export default FormValidation