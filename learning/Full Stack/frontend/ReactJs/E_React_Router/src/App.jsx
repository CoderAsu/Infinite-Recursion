import {BrowserRouter, Routes, Route, Link, useParams} from 'react-router-dom'
import Home from './Home'
import About from './About'
import Contact from './Contact'
import Product from './Product'
import Laptop from './Laptop'
import Phone from './Phone'

const App = () => {

  const User = () => {
    console.log(useParams());
    const { id } = useParams();
    return <h1>User Profile for ID: {id}</h1>
  }

  function NotFound(){
    return <h2>404! Page not found</h2>
  }

  return (
    <BrowserRouter>
      <h1>React Router Example</h1>

      {/* Here entire document gets re-rendered */}
      <a href="/">Home</a> {" "} 
      <a href="/about">About</a> {" "}
      <a href="/contact">Contact</a>

      <br />
      <br />


      {/* React Router provides a Link component that handles navigation without reloading the entire document */}

      <Link to="/">Home</Link>{" "}
      <Link to="/about">About</Link>{" "}
      <Link to="/contact">Contact</Link> {" "}
      <Link to="/user/10">User</Link> {" "}
      <Link to="/products">Products</Link>


      <Routes>
        <Route path='/' element = {<Home/>} />
        <Route path='/about' element = {<About/>}/>
        <Route path='/contact' element = {<Contact/>}/>

        <Route path='/user/:id' element = {<User/>}/>

        <Route path='*' element= {<NotFound />}/>

        <Route path='/products' element = {<Product/>}>
          {/* Don't add "/" inside nested router */}
          <Route path='phone' element = {<Phone/>}/>
          <Route path='laptop' element = {<Laptop/>}/>
        </Route>
      </Routes>
    </BrowserRouter>
  )
}

export default App