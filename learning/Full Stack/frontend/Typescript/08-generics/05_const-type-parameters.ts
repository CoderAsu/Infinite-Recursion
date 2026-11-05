// A const type parameter preserves literal values when a generic function receives them.
function makeTuple<const T extends readonly string[]>(items: T): T {
  return items;
}

const topics = makeTuple(["types", "generics"]);
type Topic = (typeof topics)[number];
const firstTopic: Topic = "types";

console.log(topics, firstTopic);

export {};





/*
    See here how const can be useful

    TypeScript can sometimes widen specific literal types into broader types.

    let name = "Asu";
    const city = "Berhampur";



    What are their inferred types?

    let name: string = "Asu";
    const city: "Berhampur" = "Berhampur";

*/