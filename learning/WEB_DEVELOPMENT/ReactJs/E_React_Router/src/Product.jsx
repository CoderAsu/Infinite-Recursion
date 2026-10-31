import { Link, Outlet } from 'react-router-dom'

const Product = () => {
  return (
    <div>
        <h1>Products</h1>
        <nav>
            <Link to= 'phone'>Phones</Link> {" "}
            <Link to = 'laptop'>Laptops</Link>
        </nav>

        <Outlet/>
    </div>
  )
}

export default Product