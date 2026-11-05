import {useState} from 'react'

function Toggle() {

    const [isVisible, setVisible]= useState(false);

    const [isLiked, setLike] = useState(false);

  return (
    <div>
        <button onClick={() => setVisible(!isVisible)}>{isVisible? "Hide": "Show"}</button> <br />
        {isVisible && <p>This is secret message</p>} <br />

        <button onClick={() => setLike(!isLiked)}>{isLiked? "🩷 Liked": "Like"}</button>

    </div>
  )
}

export default Toggle