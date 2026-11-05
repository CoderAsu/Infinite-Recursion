// A generator function in JavaScript is a special type of function that can be paused and resumed during its execution, allowing it to produce a series of values over time.

/* 
    To create a generator function use starmark after function or before function name.

    example:
    function* name(){}
    function *name(){}
*/

    function *generateit(){
        console.log("First Message");
        yield 'Yield No.1';
        console.log("Second Message")
        yield "Yield No.2";
        yield "Yield No.3";
        yield "Yield NO.4";
    }

    let g = generateit();
    console.log(g);
    console.log(g.next());
    g.next();
    console.log(g.next().value);
    

















function* letsGenerate(){
    let nextNum = 300;
    while (true){
        yield(nextNum++);
    }
}


let generate = letsGenerate();

for(let value of generate){
    if(value > 305) break;
    console.log(value);
}












function *gen(){
    let result = (yield) * 10;
    console.log("Ans:", result);
}

let a = gen();
a.next();
a.next(500);





function* multipleGen(){
    let result = [yield, yield, yield];
    console.log("Result:", result[2]);
}

let b = multipleGen();
b.next();
b.next(100);
b.next(200);
b.next(300);









function* mulVal(){
    yield 55;
    yield ["Node", "Angular", "React"];
    yield* ["Apple", "orange", "banana"];
}

let c = mulVal();
console.log(c.next());
console.log(c.next());
console.log(c.next());
console.log(c.next());











function *spreadVal(){
    yield "PHP";
    yield "TypeScript";
    yield "Tailwind";
    yield "Bootstrap";
}

let d = spreadVal();

console.log(d.next());
console.log([...d]);
console.log(d.return("Ending Now"));
console.log(d.next());


// If we have to end the generator function then use return().