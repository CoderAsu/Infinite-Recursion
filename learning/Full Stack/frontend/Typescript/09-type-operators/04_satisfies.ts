type Route = {
  method: "GET" | "POST";
  path: `/${string}`;
};

// An annotation would widen the method to "GET" | "POST".
// `satisfies` checks the shape but keeps the value as the literal "GET".
const route = {
  method: "GET",
  path: "/lessons",
} satisfies Route;

function request(method: Route["method"], path: Route["path"]): string {
  return `${method} ${path}`;
}

console.log(request(route.method, route.path));

export {};
