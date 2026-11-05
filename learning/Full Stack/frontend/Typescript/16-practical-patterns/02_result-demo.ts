// The caller must narrow the discriminated result before reading value or error.
import { divide } from "./01_result";

const result = divide(10, 2);
if (result.ok) {
  console.log(`Answer: ${result.value}`);
} else {
  console.log(`Problem: ${result.error}`);
}

export {};
