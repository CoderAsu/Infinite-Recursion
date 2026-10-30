// A constraint limits accepted types while preserving extra properties.
function withId<T extends { id: string }>(value: T): T {
  return value;
}

function getProperty<T, K extends keyof T>(object: T, key: K): T[K] {
  return object[key];
}

const user = withId({ id: "u-1", name: "Ada" });
console.log(user, getProperty(user, "name"));

export {};
