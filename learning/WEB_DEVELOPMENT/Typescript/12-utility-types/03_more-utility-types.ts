// Utility types can inspect asynchronous results, constructors, methods, and strings.
type LoadedValue = Awaited<Promise<{ ok: boolean }>>;
const loaded: LoadedValue = { ok: true };

class Repository {
  constructor(readonly name: string) {}
}

type RepositoryArguments = ConstructorParameters<typeof Repository>;
type RepositoryInstance = InstanceType<typeof Repository>;
const repositoryArguments: RepositoryArguments = ["lessons"];
const repository: RepositoryInstance = new Repository(...repositoryArguments);

function format(this: { prefix: string }, value: string): string {
  return `${this.prefix}${value}`;
}

type FormatContext = ThisParameterType<typeof format>;
type BoundFormat = OmitThisParameter<typeof format>;
const context: FormatContext = { prefix: "Lesson: " };
const boundFormat: BoundFormat = format.bind(context);

type Ready = Uppercase<"ready">;
const state: Ready = "READY";
console.log(loaded.ok, repository.name, boundFormat("utility types"), state);

export {};
