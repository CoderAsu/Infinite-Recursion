export {};

// `declare global` adds a property to a platform type supplied by a library.
declare global {
  interface Window {
    appVersion?: string;
  }
}

const version = typeof window === "undefined" ? "server" : window.appVersion ?? "browser";
console.log(version);
