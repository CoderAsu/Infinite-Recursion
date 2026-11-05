var fruits = ["Apple", "Orange", "Grapes"];

let y = fruits[Symbol.iterator]();
console.log(y.next());
y.next();
console.log(y.next());
console.log(y.next());


let veg = "Carrot";

let z = veg[Symbol.iterator]();
console.log(z.next().value);
console.log(z.next().value);
z.next();
console.log(z.next().value);
console.log(z.next().value);
console.log(z.next().value);
console.log(z.next().done);

console.log(typeof z);
console.log(typeof veg[Symbol.iterator]());
console.log(typeof veg[Symbol.iterator]);













let car = ["Tata", "Ferrari", "Buggati", "Lamborghini"];

let iter = car[Symbol.iterator]();

let result = iter.next();

while(!result.done){
    console.log(result.value);
    result = iter.next();
}










// how to create iterator function

function numberIterator(arr){
    let nextNum = 0;
    return {
        nextVal(){
            if(nextNum < arr.length){
                return{
                    value : arr[nextNum++],
                    done : false
                    
                }                
            }
            else{
                return{
                    done : true
                }
            }  
        }
    }
}



let numbers = [100, 200, 300, 400];

let num = numberIterator(numbers);
console.log(num.nextVal());
console.log(num.nextVal());
console.log(num.nextVal());
console.log(num.nextVal());
console.log(num.nextVal());









// see the difference between postfix and prefix

let a = 0;
let b = 0;

console.log(a++);
console.log(++b);