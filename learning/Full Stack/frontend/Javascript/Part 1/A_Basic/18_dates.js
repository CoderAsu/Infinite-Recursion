// Date objects are static. The "clock" is not "running"/

// The computer clock is ticking, date objects are not.

// By default, JS will use the browser's time zone and display a date as a full text string.

// Date objects are created with the new Date() constructor.

// There are 9 ways to create a new date object.
/* 
new Date()
new Date(date string)

new Date(year,month)
new Date(year,month,day)
new Date(year,month,day,hours)
new Date(year,month,day,hours,minutes)
new Date(year,month,day,hours,minutes,seconds)
new Date(year,month,day,hours,minutes,seconds,ms)

new Date(milliseconds)
*/


// new Date()
// new Date() creates a date object with the current date and time.

const date = new Date();
console.log(date);


// new Date(date string)
// new Date(date string) creates a date object from a date string

const date1 = new Date("October 13, 2014 11:13:00")

const date2 = new Date("2022-03-25")

console.log(date1);
console.log(date2);
console.log();




// new Date(year, month,...)
// new Date(year, month, ...) creates a date object with a specified date and time.
// 7 numbers specify year, month, day, hour, minute, second, and millisecond (in that order)

const date3 = new Date(2018, 11, 23, 10, 33, 30, 0);

console.log(date3);


// Note
// JavaScript counts months from 0 to 11:
// January = 0.
// December = 11.


// Specifying a month higher than 11, will not result in an error but add the overflow to the next year.

const date4 = new Date(2018, 15, 24, 10, 33, 30);
console.log(date4);


// Specifying a day higher than max, will not result in an error but add the overflow to the next month.

const date5 = new Date(2018, 5, 35, 10, 33, 30);
console.log(date5);


// You cannot omit month. If you supply only one parameter it will be treated as milliseconds.

console.log();

















// Previous Century
// One or two digit years will be interpreted as 19xx.

const cen = new Date(9, 11, 24);
console.log(cen);
console.log();


// JavaScript Stores Dates as Milliseconds
// JavaScript stores dates as number of milliseconds since January 01, 1970.
// Zero time is January 01, 1970 00:00:00 UTC.
// One day (24 hours) is 86 400 000 milliseconds.


const miliSec = new Date(100000000000);
console.log(miliSec);

const miliSec2 = new Date(-100000000000);
console.log(miliSec2);
console.log();









// JavaScript Date Formats
// There are generally 3 types of JS date input formats.
/* 

Type	    Example
ISO Date	"2015-03-25" (The International Standard)
Short Date	"03/25/2015"
Long Date	"Mar 25 2015" or "25 Mar 2015"
*/




















// ISO Dates
// The ISO 8601 syntax (YYYY-MM-DD) is also the preferred JavaScript date format.

const d1 = new Date("2015-03-25");
console.log("d1 ", d1);

// The computed date will be relative to your time zone.
// Depending on your time zone, the result above will vary between March 24 and March 25.





// ISO dates can be written without specifying the day (YYYY-MM).

const d2 = new Date("2015-03");
console.log("d2 ", d2);






// ISO dates can be written without month and day (YYYY).

const d3 = new Date("2015");
console.log("d3 ", d3);


// Time zones will vary the result above between December 31 2014 and January 01 2015.



// ISO dates can be written with added hours, minutes, and seconds (YYYY-MM-DDTHH:MM:SSZ).

const d4 = new Date("2015-03-24T12:00:00Z");
console.log("d4 ", d4);

// Date and time is separated with a capital T.
// UTC time is defined with a capital letter Z.
// If you want to modify the time relative to UTC, remove the Z and add +HH:MM or -HH:MM instead.

const d5 = new Date("2015-03-25T12:00:00-06:30");
console.log("d5 ", d5);
console.log();



// UTC (Universal Time Coordinated) is the same as GMT (Greenwich Mean Time).

// Omitting T or Z in a date-time string can give different results in different browsers.





// Time Zones
// When setting a date, without specifying the time zone, JavaScript will use the browser's time zone.

// When getting a date, without specifying the time zone, the result is converted to the browser's time zone.

// In other words: If a date/time is created in GMT (Greenwich Mean Time), the date/time will be converted to CDT (Central US Daylight Time) if a user browses from central US.





























// Short Dates
// Short dates are written with an "MM/DD/YYYY" syntax.

const dt1 = new Date("03/25/2015");
console.log("date1 ", dt1);


// Warnings!
// In some browsers, months or days with no leading zeroes may produce an error.

const dt2 = new Date("2015-3-25");
console.log("date2 ", dt2);


// The behavior of "YYYY/MM/DD" is undefined.
// Some browsers will try to guess the format. Some will return NaN.

const dt3 = new Date("2015/06/12");
console.log("date3 ", dt3);


// The behavior of  "DD-MM-YYYY" is also undefined.
// Some browsers will try to guess the format. Some will return NaN.

console.log();


























// Long Dates
// Long dates are most often written with a "MMM DD YYYY" syntax.

const Ldate1 = new Date("Mar 20 2016");
console.log("Ldate1 ", Ldate1);


// Month and day can be in any order.

const Ldate2 = new Date("25 Feb 2014");
console.log("Ldate2 ", Ldate2);


// Month can be written in full (January), or abbreviated (Jan).

const Ldate3 = new Date("January 09 2010");
console.log("Ldate3 ", Ldate3);


// Commas are ignored. Names are case insensitive.

const Ldate4 = new Date("JANUARY, 25, 2015");
console.log("Ldate4 ", Ldate4);


