// TypeScript merges declarations with the same interface name in one scope.
interface Settings {
  theme: "light" | "dark";
}

interface Settings {
  pageSize: number;
}

const settings: Settings = { theme: "dark", pageSize: 20 };
console.log(settings);

export {};
