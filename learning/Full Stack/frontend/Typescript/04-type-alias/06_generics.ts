// Generics allow a type alias to work with different types while preserving type information.

type Box<T> = {
    value: T;
};

const numberBox: Box<number> = {
    value: 100
};

const stringBox: Box<string> = {
    value: "Hello, Asu"
};