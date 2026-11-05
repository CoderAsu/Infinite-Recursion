// Promise.all() is a powerful method that runs multiple promises in parallel and waits for all of them to resolve (or for any one to reject). 




function fetchUser() {
    return new Promise(resolve => setTimeout(() => resolve("User data loaded"), 1000));
}

function fetchOrders() {
    return new Promise(resolve => setTimeout(() => resolve("Order details loaded"), 2000));
}

function fetchNotifications() {
    return new Promise((resolve, reject) => setTimeout(() => resolve("Notifications loaded"), 1500));
}

Promise.all([fetchUser(), fetchOrders(), fetchNotifications()])
    .then(results => console.log(results))  // Runs if all succeed
    .catch(error => console.error("One of the promises failed:", error));