// A Result makes success and failure explicit, so normal failures need no exception.
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
