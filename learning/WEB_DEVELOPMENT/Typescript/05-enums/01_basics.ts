
// Important: By default, numeric enums start at 0 and increment automatically.

enum Role {
    Admin,
    Manager,
    Employee
}

console.log(Role.Admin);    // 0
console.log(Role.Manager);  // 1
console.log(Role.Employee); // 2





// custom numeric values

enum Status2 {
    Pending = 10,
    Processing = 20,
    Completed = 30,
    Failed = 40
}

console.log(Status2.Pending);    // 10
console.log(Status2.Completed);  // 30





// We don't need to assign every value.

enum Status3 {
    Pending = 1,
    Processing,
    Completed,
    Failed
}

console.log(Status2.Pending);       // 1
console.log(Status2.Processing);    // 2
console.log(Status2.Completed);     // 3
console.log(Status2.Failed);        // 4






// You can also mix manually assigned and automatically assigned numeric values.

enum Role99 {
    Admin = 10,
    Manager,       // 11
    Employee = 50,
    Intern         // 51
}





// We can assign strings to enum members.

enum Role100{
    Admin1 = "Admin",
    Manager1 = "Manager",
    Employee1 = "Employee"
}







// An enum can contain both numeric and string values.

enum Data{
    id = 101,
    name = "Subham",
    age = 21
}