// A shared literal property lets a switch narrow each member of the union.
type Loading = { status: "loading" };
type Success = { status: "success"; data: string[] };
type Failure = { status: "failure"; message: string };
type RequestState = Loading | Success | Failure;

function messageFor(state: RequestState): string {
  switch (state.status) {
    case "loading":
      return "Loading...";
    case "success":
      return `Received ${state.data.length} items`;
    case "failure":
      return `Error: ${state.message}`;
  }
}

console.log(messageFor({ status: "success", data: ["a", "b"] }));

export {};
