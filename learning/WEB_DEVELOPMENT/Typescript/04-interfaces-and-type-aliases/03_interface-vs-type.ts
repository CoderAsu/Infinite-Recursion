// Interfaces are especially useful for object contracts and can be extended.
interface HasId {
  id: number;
}

interface Article extends HasId {
  title: string;
}

// Type aliases can describe unions, tuples, primitives, and object shapes.
type ArticleState = "draft" | "published";
type ArticleWithState = Article & { state: ArticleState };

const article: ArticleWithState = { id: 1, title: "Types", state: "published" };
console.log(article);

export {};
