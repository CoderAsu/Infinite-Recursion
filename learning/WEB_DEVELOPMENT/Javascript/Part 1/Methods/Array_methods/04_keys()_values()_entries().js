let heroes = ["Ironman", "Superman", "Doctor Strange", "Hulk", "Flash", "Thor", 100]

let keys = Object.keys(heroes);
console.log(typeof keys, keys);


// Create an Iterable
const list = heroes.keys();

for (let x of list) {
  console.log(typeof x, x);
}


// The keys() method returns an Iterator object with the keys of an array.

// The keys() method does not change the original array.










let values = Object.values(heroes);
console.log(values);

// Create an Iterable
const list1 = heroes.values();

for (let x of list1) {
  console.log(typeof x, x);
}


// The values() method returns an Iterator object with the values of an array.

// The values() method does not change the original array.









let entries = Object.entries(heroes);
console.log(entries);

// Create an Iterable
const list2 = heroes.entries();

for (let x of list2) {
  console.log(typeof x, x);
}



// The entries() method does not change the original array.



