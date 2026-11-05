// `symbol` describes unique keys. A `unique symbol` can identify one exact property.
const generalKey: symbol = Symbol("general-key");
const routeKey: unique symbol = Symbol("route-key");

type RouteContext = {
  [routeKey]: string;
};

const context: RouteContext = {
  [routeKey]: "/lessons",
};

console.log(typeof generalKey, context[routeKey]);

export {};
