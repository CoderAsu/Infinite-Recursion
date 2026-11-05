import { useState, useEffect } from "react";
import "./changeTheme.css";

const SharedState = () => {

    const [theme, setTheme] = useState("light");

    useEffect(() => {
        document.body.className = theme;
    }, [theme]);

    return (
        <div>

            <ComponentA
                setTheme={setTheme}
            />

            <ComponentB theme={theme} />
        </div>
    );
};


// Component A
function ComponentA({setTheme }) {

    return (
        <div>

            <button
                onClick={() =>
                    setTheme(prev =>
                        prev === "light" ? "dark" : "light"
                    )
                }
            >
                Change Theme
            </button>
        </div>
    );
}


// Component B
function ComponentB({ theme }) {

    return (
        <div>
            <h3>Current Theme: {theme}</h3>
        </div>
    );
}

export default SharedState;