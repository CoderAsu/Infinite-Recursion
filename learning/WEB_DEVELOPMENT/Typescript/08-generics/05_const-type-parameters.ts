// A const type parameter preserves literal values when a generic function receives them.
function makeTuple<const T extends readonly string[]>(items: T): T {
  return items;
}

const topics = makeTuple(["types", "generics"]);
type Topic = (typeof topics)[number];
const firstTopic: Topic = "types";

console.log(topics, firstTopic);

export {};
