
if (true){
    console.log("The code will execute");
}

if(false){
    console.log("The code will not execute");
    
}


// <, >, <=, >=, ==, !=, ===, !==


const isUserLoggedIn = false;

if(isUserLoggedIn){
    console.log("User logged in")
}else{
    console.log("User not logged in")
}




const temperature = 55;

if(temperature < 50){
    console.log("Your room temperature is less than 50")
}
else{
    console.log("Your room temperature is greater than 50")
}



const age = 21;

if(age <= 12){
    console.log("You can ride for 10 mins");

} else if(age <= 18){
    console.log("You can ride for 5 mins");

} else {
    console.log("You can't ride");

}


// && || !()


const userLoggedIn = true;
const debitCard = true;
const loggedInFromGoogle = false;
const loggedInFromEmail = true;

if(userLoggedIn && debitCard){
    console.log("Allow to buy course")
}

if(loggedInFromGoogle || loggedInFromEmail){
    console.log("User logged in");
}

if(!(loggedInFromGoogle)){
    console.log("Hello");
}







// Switch case

const month = "nov"

switch (month) {
    case "jan":
        console.log("January");
        break;
    
    case "feb":
        console.log("Febraury");
        break;

    case "mar":
        console.log("March");
        break;

    case "apr":
        console.log("April");
        break;

    default:
        console.log("Enter value between January and April included");
        break;
}






// Nullish Coalescing Operator (??) : null or undefined

// The ?? operator returns the first argument if it is not nullish (null or undefined).

let val1;
val1 = undefined ?? 10;

let val2;
val2 = null ?? 20;

let val3;
val3 = null ?? undefined ?? 50;

let val4;
val4 = 22 ?? 56;


console.log(val1);
console.log(val2);
console.log(val3);
console.log(val4);







// Terniary Operator (?)
// condition ? true : false

const teaPrice = 30;

teaPrice > 20 ? console.log("Take it") : console.log("Can't get");











// Optional Chaining Operator (?.)

// The ?. operator returns undefined if an object is undefined or null (instead of throwing an error).

const user = {
    name: "Subham",
    age: 28,
    address: {
        street: "Main St",
        city: "New Road",
        state: "Odisha"
    }
}

console.log(user?.address?.streetNo?.houseno); // if I remove ? mark, it shows an error. The ? mark checks whether its true or false, if it is false then shows undefined.
console.log(user?.address?.city);
