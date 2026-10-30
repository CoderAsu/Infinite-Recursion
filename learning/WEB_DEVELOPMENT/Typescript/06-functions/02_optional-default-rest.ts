// Optional parameters may be omitted, default parameters provide a fallback,
// and rest parameters collect remaining arguments into an array.
function formatName(first: string, last?: string): string {
  return last ? `${first} ${last}` : first;
}

function createLabel(label: string = "untitled"): string {
  return label.toUpperCase();
}

function total(...values: number[]): number {
  return values.reduce((sum, value) => sum + value, 0);
}

console.log(formatName("Ada"), createLabel(), total(1, 2, 3, 4));

export {};
