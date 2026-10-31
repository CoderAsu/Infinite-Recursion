import { useState, useEffect } from "react"

const Fetch = () => {
    const [users, setUsers] = useState([])

    useEffect(() => {
        fetch('https://jsonplaceholder.typicode.com/users')
        .then(response => response.json())
        .then(json => setUsers(json))
    }, []); 
  return (
    <div>
        <h2>User List</h2>

        {users.map((user) => {
        const [firstName, ...lastName] = user.name.split(" ");

        return (
            <li key={user.id}>
                First Name: {firstName} | Last Name: {lastName.join(" ")}
            </li>
        );
    })}
    </div>
  )
}

export default Fetch