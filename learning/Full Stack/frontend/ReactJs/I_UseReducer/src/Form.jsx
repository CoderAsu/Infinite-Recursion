import {useReducer} from 'react'

const Form = () => {
    function reducer(state, action){
        return {
            ...state,
            [action.name] : action.value
        }
    }

    const [formData, dispatch] = useReducer(reducer, {
        username: "",
        email: ""
    })

    function handleChange(e){
        dispatch({
            name: e.target.name,
            value: e.target.value
        })
    }

  return (
    <div>
        <form action="">
            <input 
                type="text" 
                name='username'
                placeholder='User name'
                value={formData.username}
                onChange={handleChange}
            />

            <input 
                type="email" 
                name='email'
                placeholder='email'
                value={formData.email}
                onChange={handleChange}
            />
        </form>

        <p>
            {formData.username} = {formData.email}
        </p>
    </div>
  )
}

export default Form