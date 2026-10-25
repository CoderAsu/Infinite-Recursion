import {useState} from 'react'

const MultiInput = () => {

    const [formData, setFormData] = useState({
        name: "",
        email: "",
        age: ""
    })

    const formStyle = {
        padding: "22px",
        margin: "10px",
        border: "1px solid black",
        display: "flex",
        flexDirection: "column",
        height: "130px",
        width: "max-content",
        gap: "16px"
    }

    const handleSubmit = (e) => {
        e.preventDefault();
        console.log(formData);   
    }

    const handleChange = (e) => {
        const {name, value} = e.target;
        setFormData((obj) => ({
            ...obj,
            [name]: value
        }))
    }

  return (
    <div>
        <form action="" style={formStyle} onSubmit={handleSubmit}>

            <div>
                <label htmlFor="name">User Name: </label>
                <input 
                    type="text" 
                    name='name'
                    id='name' 
                    value={formData.name}
                    onChange={handleChange}
                />
            </div>

            <div>
                <label htmlFor="email">Email: </label>
                <input 
                    type="email" 
                    name='email'
                    id='email' 
                    size = '25'
                    value={formData.email} 
                    onChange={handleChange}
                />
            </div>

            <div>
                <label htmlFor="age">Age: </label>
                <input 
                    type="number" 
                    name='age'
                    min={20}
                    max={45} 
                    value={formData.age}
                    onChange={handleChange}
                />
            </div>

            <input type="submit" />
        </form>
    </div>
  )
}

export default MultiInput