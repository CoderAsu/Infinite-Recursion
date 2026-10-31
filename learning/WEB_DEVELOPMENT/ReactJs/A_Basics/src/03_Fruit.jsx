function Fruit() {
    const fruits = ['Apple', "Banana", "Mango"]

    return (
        <>
            <br />
            <h2>Fruit List</h2>
            <ul type="none">
                {fruits.map((fruit, index) => (
                    <li>{index} - {fruit}</li>
                ))}

            </ul>
        </>

    )
}

export default Fruit