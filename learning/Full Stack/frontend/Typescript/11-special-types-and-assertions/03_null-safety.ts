// Strict null safety forces code to handle values that may be missing.
interface User {
  name: string;
  nickname?: string;
}

function displayName(user: User | null): string {
  return user?.nickname ?? user?.name ?? "Anonymous";
}

console.log(displayName({ name: "Ada" }), displayName(null));

export {};
