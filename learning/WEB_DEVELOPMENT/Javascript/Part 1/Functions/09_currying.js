
// Function currying is a technique where a function with multiple parameters is transformed into a sequence of functions, each taking one argument at a time.




// function add(a){
//     return function(b){
//         return function (c){
//             return a + b + c;
//         }
//     }
// }


// or

const add = a => b => c => console.log(a + b + c);

add(3)(4)(5);






// function sendAutoEmail(to){
//     return function(sub){
//         return function(body){
//             console.log(`Sending Email to ${to} with subject ${sub}: ${body}`)
//         }
//     }
// }

// or

const sendAutoEmail = to => sub => body => console.log(`Sending Email to ${to} with subject ${sub}: ${body}`);


let step1 = sendAutoEmail("asupadhy432@gmail.com");
let step2 = step1("New Order Confirmation");
step2("Hey Asu, here is something for you!");
