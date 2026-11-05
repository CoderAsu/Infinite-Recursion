function User() {
    
    const users = {
        first_name: "Jiwoo",
        last_name: "Sung",
        age : 23
    }

    function fullName(users){
        return users.first_name + " " + users.last_name;
    }


    const all_Users = [
        {first_name: "John", last_name: "Doe", age: 34},
        {first_name: "Roman", last_name: "Reigns", age: 27},
        {first_name: "Virat", last_name: "Kohli", age: 36}
    ]
    
    return (

        <>
            <h2>Person Details: </h2>
            <p>Full Name: {fullName(users)}</p>
            <p>Age: {users.age}</p>


            <h2>User Details:</h2>

            <ol type= "1">
                {all_Users.map((user) => (
                    
                    <li>{fullName(user)} is around {user.age} years old</li>
                
                ))}

            </ol>

            
        
        </>
    )

}

export default User