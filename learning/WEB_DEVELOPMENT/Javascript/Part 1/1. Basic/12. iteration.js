//  for loop

const array = [5, 10, 15, 20, 25];

for (let index = 0; index < array.length; index++) {
    const element = array[index];
    console.log(element);
}



for(let i = 1; i <= 30; i++){
    console.log("\n" + `Table: ${i}`)
    for(let j = 1; j <= 10; j++){
        console.log(`${i} * ${j} = ${i*j}`);
    }
}
















// break and continue

for (let i = 0; i <= 10; i++) {
    if (i == 5){
        console.log(`Detected 5`);
        break;
    }
    console.log(`Value of i is ${i}`);
    
}


for (let i = 0; i <= 10; i++) {
    if (i == 5){
        console.log(`Detected 5`);
        continue;
    }
    console.log(`Value of i is ${i}`);
    
}


















// while loop


let i = 0;
while(i <= 10){
    console.log(`Value of i is ${i}`);
    i++;
}


let heroes = ["Ironman", "Superman", "Doctor Strange", "Hulk", "Flash", "Thor"]

let arr = 0;
while(arr < heroes.length){
    console.log(heroes[arr]);
    arr = arr + 1;
}




















// do-while loop

let score = 1;
do {
    console.log(score);
    score++;
} while (score <= 5);


let score1 = 11;
do {
    console.log(score1);
    score++;
} while (score1 <= 10);



