import Fruit from "./Fruit";
import Greet from "./Greet"
import User from "./User";
import Login from "./Login";
import Props from "./Props";
import reactLogo from './assets/react.svg'
import Button from "./Button";
import Hello from "./Hello";


function App() {

  const name = "World";

  const headingStyle = {
    backgroundColor: "white",
    fontSize: "30px",
    height: "30px",
    color: "black",
    fontWeight: "bold",
    letterSpacing: "2px",
    margin: "20px auto"

  } 

  function handleClick(){
    alert("Hello User! What's going on?")
  }


  const buttonStyle = {
    backgroundColor: "blue",
    color: "white",
    borderRadius: "8px",
    border: "0",
    margin: "30px auto 0",
    height: "40px",
    width: "90px",
    fontSize: "18px"
  }

  const butStyle = {
    backgroundColor: "hotpink",
    color: "black",
    borderRadius: "8px",
    border: "0",
    margin: "30px auto",
    height: "40px",
    width: "90px",
    fontSize: "18px"
  }



  const HandleMH = () => console.log("Mouse get hovered by user");
  const HandleDC = () => console.log("Mouse get double clicked by user");


  const HandleChange = (event) => {
    console.clear();
    console.log("Value:", event.target.value);
  }

  const inputStyle = {
    margin: "15px auto 5px"
  }


  function Message() {
    alert("Hello, from message box")
  }

  return (
    <>
      <h1>Hello {name}!</h1>

      <Greet />

      <Hello />

      <br />

      <img src={reactLogo} alt="react" height="50px" aspect-ratio="1"/>



      <h1 style={headingStyle}>Welcome to ReactJs</h1>



      <button onClick={handleClick} style={buttonStyle}>Click Me</button>


      <br />


      <button onMouseEnter={HandleMH} onDoubleClick={HandleDC} style={butStyle}>Click</button>


      <br />


      <input type="text" placeholder="Type Something" onChange={HandleChange} style={inputStyle}/>


      <br/>


      <Fruit/>


      <br /> <br />


      <User/>


      <br /> <br />


      <Login/>


      <br /><br />


      <Props name = "Tanjiro Kamado" age = "15"/>

      <Props name = "Giyu Tomiyoka" age = {17}/>

      <Props name = "Eion Morgan" age = {35} country = "England"/>


      <br /> <br />


      <Button label = "Click Here" handleButton = {Message}/>



      {/*
        values of props can be:
        1. String
        2. Number
        3. Boolean
        4. Array
        5. Object
        6. Function

      */}



    </>
  )
}

export default App
