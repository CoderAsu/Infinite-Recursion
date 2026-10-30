// A Result makes success and failure explicit, so normal failures need no exception.

type ApiState =
    | { status: "loading" }
    | { status: "success"; data: string }
    | { status: "error"; message: string };


function showState(state: ApiState): string {
    switch (state.status) {
        case "loading":
            return "Please wait...";

        case "success":
            return `Data: ${state.data}`;

        case "error":
            return `Error: ${state.message}`;
    }
}

console.log(showState({ status: "loading" }));
console.log(showState({ status: "success", data: "Lessons loaded" }));
console.log(showState({ status: "error", message: "Network failed" }));










export type Result<T, E> =
  | { ok: true; value: T }
  | { ok: false; error: E };

export function success<T>(value: T): Result<T, never> {
  return { ok: true, value };
}

export function failure<E>(error: E): Result<never, E> {
  return { ok: false, error };
}

export function divide(left: number, right: number): Result<number, string> {
  return right === 0 ? failure("Cannot divide by zero") : success(left / right);
}

