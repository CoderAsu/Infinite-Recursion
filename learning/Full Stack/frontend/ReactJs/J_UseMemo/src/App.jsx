import WithUseMemo from "./WithUseMemo"
// import WithoutUseMemo from "./WithoutUseMemo"

// useMemo  is a React Hook that caches the result of a calculation between re-renders. It recalculates only when one of its dependencies changes, helping you avoid repeating expensive work on every render.


const App = () => {
  return (
    <div>
      {/* <WithoutUseMemo/> */}
      <WithUseMemo />
    </div>
  )
}

export default App