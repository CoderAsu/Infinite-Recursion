// Template literal types build new string unions from existing string unions.
type EventName = "click" | "focus" | "change";
type HandlerName = `on${Capitalize<EventName>}`;
type CssLength = `${number}px` | `${number}rem` | "auto";

const handler: HandlerName = "onClick";
const width: CssLength = "12rem";

console.log(handler, width);

export {};
