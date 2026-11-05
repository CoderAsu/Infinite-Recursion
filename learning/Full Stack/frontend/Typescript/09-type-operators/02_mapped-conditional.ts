// Mapped types transform every property; conditional types choose by a type relationship.
type Flags<T> = {
  [Key in keyof T]: boolean;
};

type ElementType<T> = T extends (infer Item)[] ? Item : T;

interface Preferences {
  email: string;
  darkMode: boolean;
}

const changed: Flags<Preferences> = { email: true, darkMode: false };
const element: ElementType<string[]> = "first";

console.log(changed, element);

export {};
