// We can access members in different ways.

enum Color {
    Red = "RED",
    Green = "GREEN",
    Blue = "BLUE"
}


// dot notation
console.log(Color.Red);


// Using a variable
let selectedColor: Color = Color.Red;
console.log(selectedColor);

selectedColor = Color.Blue;

// Using enums in condition

function checkColor(clr:Color): void{
    if(clr == Color.Red){
        console.log("Limited access");
    } else if (clr == Color.Green){
        console.log("Full access");
    } else {
        console.log("Guest access");
    }
}

checkColor(Color.Green);

export {}