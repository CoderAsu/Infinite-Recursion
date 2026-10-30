// A generic interface lets one contract work with many data types.
interface ApiResponse<T> {
  data: T;
  status: number;
  receivedAt: Date;
}

function displayResponse<T>(response: ApiResponse<T>): string {
  return `${response.status}: ${JSON.stringify(response.data)}`;
}

const response: ApiResponse<string[]> = {
  data: ["TypeScript", "Python"],
  status: 200,
  receivedAt: new Date(),
};

console.log(displayResponse(response));

export {};
