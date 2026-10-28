// `APP_VERSION` is available because global.d.ts describes the external value.
const version = typeof APP_VERSION === "undefined" ? "development" : APP_VERSION;

console.log(`Application version: ${version}`);

export {};
