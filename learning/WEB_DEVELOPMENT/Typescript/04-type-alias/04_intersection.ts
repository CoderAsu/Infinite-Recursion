// An intersection combines requirements from multiple types.

type Person = {
    name: string;
};

type Employee = {
    employeeId: number;
};

type StaffMember = Person & Employee;

const staff: StaffMember = {
    name: "Asu",
    employeeId: 101
};