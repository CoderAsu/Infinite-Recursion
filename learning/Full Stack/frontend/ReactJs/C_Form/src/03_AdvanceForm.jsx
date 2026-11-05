import {useState} from 'react'

const AdvanceForm = () => {

  const [formData, setFormData] = useState({
    favLang: 'checked',
    country: 'India',
    agree: false
  })

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
    console.log(formData)
  }

  const handleChange = (e) => {
    const {name, value, type, checked} = e.target;
    setFormData((obj) => ({
      ...obj,
      [name]: type === "checkbox" ? checked : value
    }))
  }

  return (
    <div>
        <form action="" onSubmit={handleSubmit} style={formStyle}>
          <div>
            <p style={{lineHeight: "0.2"}}>Choose your favourite language: </p>
            <input 
              type="radio" 
              id="html" 
              name="favLang" 
              value="HTML"
              checked={formData.favLang === "HTML"}
              onChange={handleChange}
            />
            <label for="html">HTML</label><br/>


            <input 
              type="radio" 
              id="css" 
              name="favLang" 
              value="CSS"
              checked={formData.favLang === "CSS"}
              onChange={handleChange}
            />
            <label for="css">CSS</label><br/>


            <input 
              type="radio" 
              id="javascript" 
              name="favLang" 
              value="JavaScript"
              checked={formData.favLang === "JavaScript"}
              onChange={handleChange}
            />
            <label for="javascript">JavaScript</label>
          </div>
            

          <div>
            <label htmlFor="country">Country: </label>
            <select 
              name="country" 
              id="country"
              value={formData.country}
              onChange={handleChange}
            >
              <option value="India">India</option>
              <option value="US">USA</option>
              <option value="Japan">Japan</option>
            </select>
          </div>


          <div>
            <label>
              <input 
                type="checkbox" 
                name='agree' 
                checked={formData.agree}
                onChange={handleChange}
              />
              I agree to terms and conditions
            </label>
          </div>

          <input type="submit"/>
        </form>
    </div>
  )
}

export default AdvanceForm