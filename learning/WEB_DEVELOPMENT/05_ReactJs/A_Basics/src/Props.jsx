function Props(prop){

    let message;

    if((prop.name && prop.age) && !(prop.country)){
        message = <p>Hello, I am {prop.name} and my age is {prop.age}</p>
    } else {
        message = <p>Hello, I am {prop.name} from {prop.country} and my age is {prop.age}</p>
    }

    return (
        <div>

            {message}

        </div>
    )
}

export default Props