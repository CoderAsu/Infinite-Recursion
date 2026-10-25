// Unlike Promise.all(), which fails if any promise rejects, Promise.allSettled() waits for all promises to complete—regardless of whether they succeed or fail. It returns an array of objects with the status and value/error of each promise.


function fetchUser() {
    return new Promise(resolve => setTimeout(() => resolve("User data loaded"), 1000));
}

function fetchOrders() {
    return new Promise((_, reject) => setTimeout(() => reject("Failed to load orders"), 2000));
}

function fetchNotifications() {
    return new Promise(resolve => setTimeout(() => resolve("Notifications loaded"), 1500));
}

Promise.allSettled([fetchUser(), fetchOrders(), fetchNotifications()])
    .then(results => console.log(results));