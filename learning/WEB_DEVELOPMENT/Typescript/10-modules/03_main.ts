// Imports create a clear dependency boundary between files.
import greeting from "./02_greeting";
import { moduleName, multiply } from "./01_math";

console.log(greeting("modules"), moduleName, multiply(6, 7));
