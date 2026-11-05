interface Settings {
  theme: string;
  pageSize: number;
}

// Mapped types can rename keys with `as` while preserving each property’s value type.
type Getters<T> = {
  [Key in keyof T as `get${Capitalize<string & Key>}`]: () => T[Key];
};

const getters: Getters<Settings> = {
  getTheme: () => "dark",
  getPageSize: () => 20,
};

console.log(getters.getTheme(), getters.getPageSize());

export {};
