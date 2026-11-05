
// array.find(function(currentValue, index, arr),thisValue)

const ages = [3, 10, 18, 20, 25, 30];

function checkAge(age){
    return age > 18;
}

let result = ages.find(checkAge);
console.log(result);






const numbers = [3, 7, 8, 10];

const firstEven = numbers.find(num => num % 2 === 0);

console.log(firstEven);





const users = [
    { id: 1, name: 'Alice' },
    { id: 2, name: 'Bob' },
    { id: 3, name: 'Charlie' },
  ];
  
const user = users.find(person => person.id === 2);
  
console.log(user);








  
const books = [
    { title: 'JavaScript Basics', pages: 120 },
    { title: 'Advanced JavaScript', pages: 300 },
    { title: 'PHP Essentials', pages: 150 },
  ];
  
  const criteria = {
    minPages: 200,
  };
  
  // Use `criteria` as `thisArg` to access its `minPages` property
  const result1 = books.find(function(book) {
    return book.pages >= this.minPages;
  }, criteria);
  
  console.log(result1);
  // Output: { title: 'Advanced JavaScript', pages: 300 }




// The find() method returns the value of the first element that passes a test.

// The find() method executes a function for each array element.

// The find() method returns undefined if no elements are found.

// The find() method does not execute the function for empty elements.

// The find() method does not change the original array.