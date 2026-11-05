const letters = new Set(["a","b","c"]);

// The size property returns the number of elements in a set.

let size = letters.size;
console.log(size);






















// The add() method inserts a new element in the set.

letters.add("d");
letters.add("e");
letters.add("f");
letters.add("c");
letters.add("c");
letters.add("c");

// If you add equal elements, only the first will be saved.

console.log(letters);
















// The delete() method removes a specified value from a set.

letters.delete("f");
letters.delete("e");

console.log(letters);














// The keys() method returns an Iterator object with the values in a set.
// The keys() method does not change the original set.

// Since a set has no keys, the keys() method returns the same as values().

const myKeys = letters.keys();
console.log(myKeys);

for (let key of myKeys) {
    console.log(key);
}

const myKeys2 = Object.keys(letters);
console.log(myKeys2);




















// The values() method returns an Iterator object with the values in a set.
// The values() method does not change the original set.

const myValues = letters.values();
console.log(myValues);

const myValues2 = Object.values(letters);
console.log(myValues2);






























// The entries() method returns an Iterator with [value,value] pairs from a set.

const myEntries = letters.entries();    
console.log(myEntries);

const myEntries2 = Object.entries(letters);
console.log(myEntries2);