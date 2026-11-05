// reduce()

// reduce() processes elements from left to right, reducing the array into a single value.

const invoices = [{ amount: 500 }, { amount: 1000 }, { amount: 200 }];

const totalRevenue = invoices.reduce((total, invoice) => total + invoice.amount, 0)

console.log(totalRevenue);


// When to use reduce
// Use it when the order of processing naturally flows from the start to the end of the array.


// Counting Occurances

const responses = ['yes', 'no', 'maybe', 'yes', 'maybe', 'no'];

const frequency = responses.reduce((acc, response) => {
    acc[response] = (acc[response] || 0) + 1;
    return acc;
}, {});

console.log(frequency);



// flattening array

const nested = [[1, 2], [3, 4], [5,[12, 13], 6]];

const flat = nested.reduce((acc, arr) => acc.concat(arr), []);

console.log(flat);















// reduceRight()

// reduceRight() works similarly to reduce, but it process elements from right to left (end to start). This makes it ideal for tasks where reverse order matters.


const letters = ['o', 'l', 'l', 'e', 'h'];

const reversed = letters.reduceRight((acc, cur) => acc + cur, "");

console.log(reversed);



// When to use reduceRight()
// Use it when you need to process elements starting from the last element first.


// Building Nested Objects

const keys = ["level1", 'level2', 'level3'];

const nestedObj = keys.reduceRight((acc, key) => ({[key] : acc}), {});

console.log(nestedObj);



// Generating BreadCrums

const pathSegments = ['home', 'team', 'about', 'contact'];

const breadCrumbs = pathSegments.reduceRight((acc, segment) => {
    acc.push((acc[acc.length - 1] || "") + '/' + segment);
    return acc;
}, []);

console.log(breadCrumbs);