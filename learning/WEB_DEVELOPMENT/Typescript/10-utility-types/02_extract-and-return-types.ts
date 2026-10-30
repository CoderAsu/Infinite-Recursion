type State = "idle" | "loading" | "success" | "failure";

// Exclude removes members; Extract keeps only members that match another type.
type FinishedState = Exclude<State, "idle" | "loading">;
type ActiveState = Extract<State, "loading" | "success">;
type PresentValue = NonNullable<string | null | undefined>;

function load(id: number, verbose: boolean): Promise<string> {
  return Promise.resolve(verbose ? `Loaded ${id}` : String(id));
}

type LoadResult = ReturnType<typeof load>;
type LoadArguments = Parameters<typeof load>;

const state: FinishedState = "success";
const active: ActiveState = "loading";
const value: PresentValue = "available";
const args: LoadArguments = [1, true];
const result: LoadResult = load(...args);

void result.then((message) => console.log(state, active, value, message));

export {};
