import PropsDrilling from "./PropsDrilling"
import SharedState from "./SharedState"
import StateLifting from "./StateLifting"

const App = () => {
  return (
    <div>
      <PropsDrilling username = "Jinwoo"/>
      <StateLifting />
      <SharedState />
    </div>
  )
}

export default App