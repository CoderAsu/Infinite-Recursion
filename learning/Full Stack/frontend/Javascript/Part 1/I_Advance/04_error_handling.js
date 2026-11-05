// The try statement defines a code block to run.
// The catch statement defines a code block to handle any error.
// The finally statement defines a code block to run regardless of the result.
// The throw statement defines a custom error.





/* Types of Error:
    1. RangeError
    2. ReferenceError
    3. SyntaxError
    4. TypeError
    5. URIError
    6. AggregateError
*/



/* properties of error:
    1. name
    2. message
    3. stack
*/



// Handling error
try {
    console.log("Start of Try");

    blabla();

    console.log("End of Try");

} catch (error) {
    console.log("Error has occurred");
    console.log(error);
    console.log(error.message);
    console.log(error.stack);
    console.log(error.name);
}






let num = 1;
try {
    num.toPrecision(500);
} catch (err) {
    console.log(err.name);
}





try {
    eval("'Hello");
} catch (err) {
    console.log(err.name);
}





let num2 = 1
try {
    num2.toUpperCase();
} catch (err) {
    console.log(err.name);
}




try {
    decodeURI("%%%");
} catch (err) {
    console.log(err.name);
}







// errors property is only used in AggregateError
try {
    throw new AggregateError([new Error("Error 1"), new Error("Error 2")], "Multiple errors occurred");
} catch (e) {
    console.log(e instanceof AggregateError); // true
    console.log(e.message); // "Multiple errors occurred"
    console.log(e.errors); // [Error: "Error 1", Error: "Error 2"]
    console.log(e.name);
}






try {
    fjdfjhh;
} catch (error) {
    if (error instanceof ReferenceError) {
        console.log("ReferenceError");
    }
    else if (error instanceof TypeError) {
        console.log("TypeError");
    }
    else if (error instanceof SyntaxError) {
        console.log("SyntaxError");
    }
    else if (error instanceof RangeError) {
        console.log("RangeError");
    }
    else if (error instanceof URIError) {
        console.log("URIError");
    }
    else if (error instanceof AggregateError) {
        console.log("AggregateError");
    }
    else {
        console.log("no Error")
    }
}







// if you want to use try-catch method with setTimeout then use try-catch inside try-catch

setTimeout(() => {
    try {
        Hello;
    }
    catch (err) {
        console.log(err.name);
    }
}, 3000);













// finally and throw keyword

try {
    let json = '{"age": 30, "nationality": "English"}'
    let user = JSON.parse(json);

    if (!user.name) {
        throw new Error("Incomplete Data: no name");
    }

    console.log(user.name); // this line will skip
    console.log(user.age); // this line will skip
} catch (error) {
    console.log(error);
} finally {
    console.log("All Done Thank You!")
}