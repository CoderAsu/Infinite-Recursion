// JavaScript variables can be converted to a new variable and another data type:
/* 
=> By the use of Javascript function
=> Automatically by Javascript itself
*/



// Converting Strings to Numbers

// The global method Number() converts a variable (or a value) into a number.

// A numeric string (like "3.14") converts to a number (like 3.14).

// An empty string (like "") converts to 0.

// A non numeric string (like "John") converts to NaN (Not a Number).


console.log(Number("3.14"));
console.log(Number(Math.PI));
console.log(Number(" "));
console.log(Number(""));

console.log(Number("99 88"));
console.log(Number("John"));


/* 
Number()        Returns a number, converted from its argument
parseFloat()    Parses a string and returns a floating point number
parseInt()      Parses a string and returns an integer
*/


console.log(+"5");
console.log(+"John")



















// Converting Numbers to Strings
// The global method String() can convert numbers to strings.

console.log(String(123));
console.log(String(100 + 23));

// The Number method toString() does the same.

console.log((143).toString());
console.log((100 + 43).toString());


/* 
toExponential()     Returns a string, with a number rounded and written using exponential notation.
toFixed()           Returns a string, with a number rounded and written with a specified number of decimals.
toPrecision()       Returns a string, with a number written with a specified length.
*/























// Converting Dates to Numbers
// The global method Number() can be used to convert dates to numbers.

let d1 = new Date();
console.log(Number(d1));

// The date method getTime() does the same.

let d2 = new Date();
console.log(d2.getTime());
























// Converting Dates to Strings

// The global method Strings() can convert dates to strings.

console.log(String(Date()));


// The Date method toString() does the same.

console.log(Date().toString());


/* 
getDate()       Get the day as a number (1-31)
getDay()        Get the weekday a number (0-6)
getFullYear()   Get the four digit year (yyyy)
getHours()      Get the hour (0-23)
getMilliseconds()   Get the miliseconds (0-999)
getMinutes()    Get the minutes (0-59)
getMonth()      Get the month (0-11)
getSeconds()    Get the seconds(0-59)
getTime()       Get the time (milliseconds since January 1, 1970)
*/






















// Converting Booleans to Numbers

// The global method Number() can also convert booleans to numbers.

console.log(Number(false));
console.log(Number(true));














// Converting Booleans to Strings

// The global method String() can convert booleans to strings.

console.log(String(false));
console.log(String(true));

// The Boolean method toString() does the same.

console.log(false.toString());
console.log(true.toString());





























// Automatic Type Conversion

// When JavaScript tries to operate on a "wrong" data type, it will try to convert the value to a "right" type.


console.log(5 + null);
console.log("5" + null);
console.log("5" + 2);
console.log("5" - 2);
console.log("5" * "2");

























// Type Conservation Table

/* 
Original    Converted       Converted       Converted
value       to Number       to String       to Boolean

false	        0	        "false"	        false	
true	        1	        "true"	        true	
0	            0	        "0"	            false	
1	            1	        "1"	            true	
"0"	            0	        "0"	            true	
"000"	        0	        "000"	        true	
"1"	            1	        "1"	            true	
NaN	            NaN	        "NaN"	        false	
Infinity	Infinity	    "Infinity"	    true	
-Infinity	-Infinity	    "-Infinity"	    true	
""	            0	        ""	            false	
"20"	        20	        "20"	        true	
"twenty"	    NaN	        "twenty"	    true	
[ ]	            0	        ""	            true	
[20]	        20	        "20"	        true	
[10,20]	        NaN	        "10,20"	        true	
["twenty"]	    NaN	        "twenty"	    true	
["ten","twenty"]NaN	        "ten,twenty"	true	
function(){}	NaN	        "function(){}"	true	
{ }	            NaN	        "[object Object]"true	
null	        0	        "null"	        false	
undefined	    NaN	        "undefined"	    false
*/