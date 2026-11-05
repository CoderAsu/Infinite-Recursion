// The Promise.resolve() method returns a Promise object resolved with a value.

// The Promise.reject() method returns a Promise object rejected with a value.


function checkUser(isLoggedIn) {
    if (isLoggedIn) {
        return Promise.resolve({ username: "Subham", role: "Admin" });
    } else {
        return Promise.reject("User is not logged in.");
    }
}

// Handling the promise
checkUser(true)  // Simulating a logged-in user
    .then(user => console.log(`Welcome, ${user.username}. Role: ${user.role}`))
    .catch(error => console.error(error));

checkUser(false)  // Simulating a non-logged-in user
    .then(user => console.log(`Welcome, ${user.username}. Role: ${user.role}`))
    .catch(error => console.error(error));