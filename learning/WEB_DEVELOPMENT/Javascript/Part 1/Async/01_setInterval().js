// setInterval() is a JavaScript function that repeatedly executes a specified function at fixed intervals (in milliseconds). It's useful for tasks that need to run periodically, like updating a clock or fetching data regularly.



let count = 0; // Initialize a counter
const maxCount = 5; // Set the maximum number of intervals

const intervalID = setInterval(() => {
  console.log(`Interval count: ${count}`);
  
  count++; // Increment the counter
  if (count >= maxCount) {
    clearInterval(intervalID); // Stop the interval
    console.log('Interval stopped.');
  }
}, 1000); // Execute every 1 second