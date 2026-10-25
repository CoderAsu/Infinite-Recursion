// Promise.any() is a method that waits for the first fulfilled promise from a list of promises. Unlike Promise.all(), which requires all to succeed, and Promise.allSettled(), which collects all outcomes, Promise.any() ignores failures unless all promises reject.


function fetchFromServer1() {
    return new Promise((resolve, reject) => setTimeout(() => reject("Server 1 failed"), 1000));
}

function fetchFromServer2() {
    return new Promise((resolve) => setTimeout(() => resolve("Server 2 responded"), 2000));
}

function fetchFromServer3() {
    return new Promise((resolve) => setTimeout(() => resolve("Server 3 responded"), 1500));
}

Promise.any([fetchFromServer1(), fetchFromServer2(), fetchFromServer3()])
    .then(response => console.log("Fastest success:", response))
    .catch(error => console.error("All requests failed:", error.errors)); // `.errors` contains all failure messages