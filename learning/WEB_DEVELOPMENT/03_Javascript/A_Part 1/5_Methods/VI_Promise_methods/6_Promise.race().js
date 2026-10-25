// Promise.race() waits for the first promise (whether resolved or rejected) and settles immediately based on that result. Unlike Promise.any(), which ignores failures unless all fail, Promise.race() returns whatever finishes first, success or failure.


function fetchFromServer1() {
    return new Promise((resolve) => setTimeout(() => resolve("Server 1 responded"), 3000));
}

function fetchFromServer2() {
    return new Promise((resolve) => setTimeout(() => resolve("Server 2 responded"), 2000));
}

function fetchFromServer3() {
    return new Promise((_, reject) => setTimeout(() => reject("Server 3 failed"), 1000));
}

Promise.race([fetchFromServer1(), fetchFromServer2(), fetchFromServer3()])
    .then(response => console.log("First response:", response))
    .catch(error => console.error("First failure:", error));