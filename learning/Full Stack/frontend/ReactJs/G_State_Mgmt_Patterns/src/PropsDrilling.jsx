
const PropsDrilling = ({username}) => {

    function Parent(){
        return <Child username={username}/>
    }

    function Child({username}){
        return (
            <>
                <h1>Hello, {username}</h1>
                <GrandChild username = {username}/>
            </>
        )
    }

    function GrandChild({username}){
        return <h2>Bye, {username}</h2>
    }


  return (
    <div>
        <h1>Props Drilling</h1>

        <Parent />
    </div>
  )
}

export default PropsDrilling