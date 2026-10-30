// An intersection requires a value to satisfy every combined object type.
type Timestamped = { createdAt: Date };
type Named = { name: string };
type NamedRecord = Timestamped & Named;

const record: NamedRecord = {
  name: "lesson",
  createdAt: new Date("2024-01-01"),
};

console.log(record.name, record.createdAt.toISOString());

export {};
