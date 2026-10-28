// `readonly` prevents mutation through this variable.
const topics: readonly string[] = ["types", "functions"];
const coordinates: readonly [number, number] = [10, 20];

// `as const` keeps literal values narrow and makes every property readonly.
const configuration = {
  mode: "development",
  retries: 3,
} as const;

// `satisfies` checks the shape while preserving the specific inferred values.
const colors = {
  primary: "#3366ff",
  secondary: "#ffffff",
} satisfies Record<string, string>;

console.log(topics, coordinates, configuration.mode, colors.primary);

export {};
