import {useState, useEffect, useEffectEvent} from 'react'

const AutoSaveForm = () => {

    const [formData, setFormData] = useState({
        name: "",
        email: ""
    });

    const printData = useEffectEvent(() => {
        console.log("Form Data: ", formData);
    })

    useEffect(() => {
        const interval = setInterval(() => {
            printData();
        }, 2000);

        return () => clearInterval(interval);
    })



  return (
    <div>
        <form action="">
            <input 
                type="text"
                placeholder='Enter your name'
                value = {formData.name} 
                onChange={(e) => setFormData({...formData, name: e.target.value})}
            /><br />
            <input 
                type="email"
                placeholder='email' 
                value = {formData.email}
                onChange={(e) => setFormData({...formData, email: e.target.value})}
            />
        </form>
    </div>
  )
}

export default AutoSaveForm