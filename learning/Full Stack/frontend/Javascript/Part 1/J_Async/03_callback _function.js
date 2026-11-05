// Sync in JS

// Synchronous
// Synchronous means the code runs in a particular sequence of instructions given in the program. Each instruction waits for the previous instruction to complete its execution.

// Asynchronous
// Due to synchronous programming, sometimes important instructions get blocked due to some previous instructions, which causes a delay in the UI. Asynchronous code execution allows to execute next instructions immediately and doesn't block the flow.


console.log("one");
console.log("two");

setTimeout(() => {
    console.log("Hello World!");
}, 1000);

console.log("three");
console.log("four");





// Callbacks
// A callback is a function passed as an argument to another function.


function sum(a, b){
    console.log(a + b);
}

function calculator(a, b, sumCallback){
    sumCallback(a, b);
}


calculator(1, 3, sum);

calculator(4, 5, (a, b) =>{
    console.log(a + b);
})





// Callback Hell
// Nested callbacks stacked below one another forming a pyramid structure. This style of programming becomes difficult to understand and manage.

function getData(dataId, getNextData){
    setTimeout(() => {
        console.log("data:", dataId);
        if(getNextData){
            getNextData();
        }       
    }, 1000);
}


// callback hell
getData(1, () => {
    console.log("getting data2...");
    getData(2, () => {
        console.log("getting data3...");
        getData(3, () =>{
            console.log("getting data4...");
            getData(4)
        })
    });
});
