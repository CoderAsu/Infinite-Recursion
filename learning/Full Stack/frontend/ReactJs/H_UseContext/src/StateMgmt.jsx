import { createContext, useContext } from "react"

function StateMgmt() {

    const UserContext = createContext();

    function Reference(){
        const userName = {name: "Jinwoo", role: "Hunter"};
        return (
            <>
                <UserContext.Provider value={userName}>
                    <Parent />
                </UserContext.Provider>
            </>
        )
    }


    function Parent(){
        return <Child />
    }

    function Child(){
        return <GrandChild />
    }

    function GrandChild(){
        const user = useContext(UserContext);
        return (
            <>
                <h2>Hello, {user.name}</h2>
                <h2>You are a {user.role}</h2>
            </>
        )
    }


  return (
    <div>
        <Reference />
    </div>
  )
}

export default StateMgmt