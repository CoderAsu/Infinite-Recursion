function Login() {

    let loggedIn = true;

    let isLoggedIn = false;

    let message;

    if (loggedIn){
        message = <h2>Welcome User!</h2>
    } else{
        message = <h2>Please Login!</h2>
    }


    return (

        <>
        
        {message}

        {isLoggedIn ? <h2> Welcome User!</h2> : <h2>Please Login!</h2>}
        
        </>


    )
}

export default Login;