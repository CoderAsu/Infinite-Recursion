// A union type allows a value to have one of several specified types.

type ID = string | number;

let userId: ID;

userId = 101;        // Allowed
userId = "USER101";  // Allowed

// userId = true;    // Error






// Aliases can also restrict a variable to a set of permitted values.

type Status = "pending" | "success" | "error";

let requestStatus: Status = "pending";

requestStatus = "success"; // Allowed
// requestStatus = "loading"; // Error




// This is called a string literal union. It is especially useful for statuses, roles, themes, and navigation options.

type Role2 = "admin" | "user" | "moderator";
type Theme = "light" | "dark";
type Direction = "left" | "right" | "up" | "down";