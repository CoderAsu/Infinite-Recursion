export let message = "ES6 Modules";


export let sum = (a, b) => (a + b);



// The default keyword is used to define a default export in ES6 modules. A default export allows you to export a single value, function, or class from a module, which can then be imported without curly braces {}.

export default function sub(a, b){
    return a - b;
}

//  A module can have only one default export.
// It will give error if we add more than 1 default.

// export default function mul(a, b){
//     return a * b;   This will give error we can't make another default because a default function is there.
// }


