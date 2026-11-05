// setDate() sets the day of the month of a date.

const d = new Date("2025-01-15");
d.setDate(20);

console.log(d);





// setFullYear() sets the year of a date. It can also set month and day.


const d2 = new Date("2025-01-15");
d2.setFullYear(2026);
console.log(d2);

d2.setFullYear(2027, 10, 3);
console.log(d2);





// setHours() sets the hour of a date. It can also set minutes, seconds and milliseconds.

const d3 = new Date();
d3.setHours(15);
let hour = d3.getHours();
console.log(hour);





// setMilliseconds() sets the milliseconds of a date.

const d4 = new Date("2023-04-14")
d4.setMilliseconds(192);
let ms = d4.getMilliseconds();
console.log(ms);





// setMinutes() sets the minutes of a date. This method can also be used to set the seconds and milliseconds.

const d5 = new Date();
d5.setMinutes(25);
let min = d5.getMinutes();
console.log(min);





// The setMonth() method sets the month of a date object. This method can also be used to set the day of the month.

const d6 = new Date("2017-11-23");
d6.setMonth(5);

console.log(d6);







// The setSeconds() method sets the seconds of a date object. This method can also be used to set the milliseconds.

const d7 = new Date("2019-01-24");
d7.setSeconds(35);
console.log(d7);





















// The setUTCDate() method sets the day of a Date object, according to UTC.

const d8 = new Date();
d8.setUTCDate(4);
let utcdate = d8.getUTCDate();
console.log(utcdate);




// The setUTCFullYear() method sets the year of a date object, according to UTC.

d8.setUTCFullYear(2017);
let utcyear = d8.getUTCFullYear();
console.log(utcyear);




// The setUTCHours() method sets the hour of a date object, according to UTC. This method can also be used to set the minutes, seconds and milliseconds.

d8.setUTCHours(21);
let utchour = d8.getUTCHours();
console.log(utchour);






// The setUTCMilliseconds() method sets the milliseconds (from 0 to 999) of a date object, according to UTC.

d8.setUTCMilliseconds(456);
let utcms = d8.getUTCMilliseconds();
console.log(utcms);




// The setUTCMinutes() method sets the minutes of a date object, according to UTC.

d8.setUTCMinutes(52);
let utcmin = d8.getUTCMinutes();
console.log(utcmin);





// The setUTCMonth() method sets the month (from 0 to 11) of a date object, according to UTC.

d8.setUTCMonth(11);
let utcmonth = d8.getUTCMonth();
console.log(utcmonth);






// The setUTCSeconds() method sets the seconds of a date object, according to UTC. It can also be used to set the milliseconds.

d8.setUTCSeconds(34);
let utcsec = d8.getUTCSeconds();
console.log(utcsec);
