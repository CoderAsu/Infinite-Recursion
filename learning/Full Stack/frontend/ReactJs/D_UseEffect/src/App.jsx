
import Fetch from "./Fetch"
import Timer from "./Timer"
import WinSizeTracker from "./WinSizeTracker"


const App = () => {
  return (
    <>
      <Timer />
      <WinSizeTracker />
      <Fetch/>
    </>
  )
}

export default App