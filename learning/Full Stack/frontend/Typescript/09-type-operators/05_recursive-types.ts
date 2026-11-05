// A recursive type can describe nested data such as JSON-like values.
type JsonPrimitive = string | number | boolean | null;
type JsonValue = JsonPrimitive | JsonValue[] | { [key: string]: JsonValue };

const lessonData: JsonValue = {
  title: "Recursive types",
  tags: ["types", "recursion"],
  published: true,
};

console.log(lessonData);

export {};
