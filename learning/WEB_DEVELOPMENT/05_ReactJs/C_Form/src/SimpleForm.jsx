import {useState} from 'react'

function SimpleForm() {

    const [name, setName] = useState("")
    const [email, setEmail] = useState("")

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
        e.preventDefault();
        
        console.log("Name:", name)
        console.log("Email:", email)
    }

    return (
        <div>
            <form action="" style={formStyle} onSubmit={handleSubmit}>

                <div>
                    <label htmlFor="name">User Name: </label>
                    <input 
                        type="text" 
                        id='name' 
                        value={name}
                        onChange={(e) => {setName(e.target.value)}}
                    />
                </div>

                <div>
                    <label htmlFor="email">Email: </label>
                    <input 
                        type="text" 
                        id='email' 
                        size = '25'
                        value={email} 
                        onChange={(e) => {setEmail(e.target.value)}}
                    />
                </div>

                <input type="submit" />
            </form>
        </div>
    )
}

export default SimpleForm