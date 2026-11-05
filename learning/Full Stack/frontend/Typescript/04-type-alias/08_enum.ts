// Using enum in a type alias

enum Direction77 {
    Up,
    Down,
    Left,
    Right
}

type Movement = {
    direction: Direction77;
    distance: number;
};

const move: Movement = {
    direction: Direction77.Up,
    distance: 10
};







// Using an enum directly as a type

enum Status43 {
    Pending,
    Approved,
    Rejected
}

type UserStatus = Status43;

let currentStatus: UserStatus = Status43.Approved;









// Combining an enum with a union type

enum Role {
    Admin2,
    User,
    Guest
}

type AccountType = Role | "superadmin";

let account1: AccountType = Role.Admin2;
let account2: AccountType = "superadmin";










// Using an enum inside an object type

enum Theme34 {
    Light = "light",
    Dark = "dark"
}

type Settings = {
    username: string;
    theme: Theme34;
    notifications: boolean;
};

const settings: Settings = {
    username: "Asu",
    theme: Theme34.Dark,
    notifications: true
};