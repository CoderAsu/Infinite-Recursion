const learner: {
  readonly id: number;
  name: string;
  favoriteTopics?: string[];
} = {
  id: 1,
  name: "Ada",
  favoriteTopics: ["types", "generics"],
};

// `readonly` prevents reassignment of `id`, while optional properties may be absent.
console.log(learner.name, learner.favoriteTopics?.join(", "));

export {};
