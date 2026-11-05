# TypeScript curriculum

This course teaches TypeScript concepts only. Read folders from `01` to `20`, then read the underscore-numbered files inside each folder in order. Every lesson includes comments explaining the TypeScript syntax and its purpose.

## Start

Run these commands from this folder:

```bash
npm install
npm run check
npm run build
npm run run:hello
```

- `npm run check` checks every TypeScript file without writing output.
- `npm run build` compiles the lessons into `dist/`.
- `npm run run:hello` runs the first compiled lesson.

## Ordered curriculum

### 01. `01-setup`

- `01_hello.ts`: the smallest TypeScript file and compiler step.
- `02_compiler-options.ts`: `target`, `module`, `strict`, `lib`, `rootDir`, and `outDir`.
- `03_type-checking.ts`: expected compiler errors with `@ts-expect-error`.

### 02. `02-types-and-inference`

- `01_inference-and-annotations.ts`: inference and explicit annotations.
- `02_primitives.ts`: primitive TypeScript types.
- `03_arrays-tuples.ts`: arrays and fixed-position tuples.
- `04_objects.ts`: object shapes, optional properties, and `readonly`.
- `05_void-object-nullish.ts`: `void`, `object`, `null`, and `undefined`.
- `06_readonly-and-const.ts`: readonly types, `as const`, and `satisfies`.
- `07_symbol-and-unique-symbol.ts`: `symbol` and `unique symbol`.
- `08_structural-typing.ts`: structural compatibility.
- `09_excess-property-checks.ts`: fresh object-literal checks.
- `10_tuple-features.ts`: optional, labeled, and rest tuple elements.

### 03. `03-functions`

- `01_parameters-and-returns.ts`: parameter and return annotations.
- `02_optional-default-rest.ts`: optional, default, and rest parameters.
- `03_function-types-and-callbacks.ts`: function types and callbacks.
- `04_overloads.ts`: overload signatures.
- `05_this-parameter.ts`: the TypeScript `this` parameter.

### 04. `04-interfaces-and-type-aliases`

- `01_contracts.ts`: interfaces, extension, and aliases.
- `02_index-signatures.ts`: dictionary-shaped objects.
- `03_interface-vs-type.ts`: interfaces versus type aliases.
- `04_call-and-construct-signatures.ts`: callable and constructable types.

### 05. `05-unions-intersections-literals`

- `01_union-literals.ts`: unions, literal types, and `as const`.
- `02_intersections.ts`: intersection types.

### 06. `06-narrowing-and-guards`

- `01_typeof-in-guards.ts`: `typeof` and `in` narrowing.
- `02_instanceof-and-equality.ts`: `instanceof` and equality narrowing.
- `03_discriminated-unions.ts`: discriminated unions.
- `04_custom-guards.ts`: custom type predicates.

### 07. `07-enums`

- `01_enums-and-alternatives.ts`: string enums and literal unions.
- `02_enum-features.ts`: numeric members and `const enum`.

### 08. `08-generics`

- `01_generic-functions.ts`: generic functions.
- `02_generic-constraints.ts`: constraints and `keyof`.
- `03_generic-interfaces.ts`: generic contracts.
- `04_generic-classes.ts`: generic classes.
- `05_const-type-parameters.ts`: const type parameters.

### 09. `09-classes-and-oop`

- `01_classes.ts`: classes, fields, constructors, and methods.
- `02_access-modifiers.ts`: `public`, `private`, `protected`, and `readonly`.
- `03_abstract-inheritance.ts`: abstract classes and inheritance.
- `04_static-getters-and-implements.ts`: static members, getters, setters, and `implements`.

### 10. `10-modules`

- `01_math.ts`: named exports.
- `02_greeting.ts`: default exports.
- `03_main.ts`: imports and module boundaries.

### 11. `11-type-operators`

- `01_keyof-typeof-indexed.ts`: `keyof`, type-level `typeof`, and indexed access.
- `02_mapped-conditional.ts`: mapped types, conditional types, and `infer`.
- `03_template-literal-types.ts`: template literal types.
- `04_satisfies.ts`: specific inference with shape checking.
- `05_recursive-types.ts`: recursive types.
- `06_key-remapping.ts`: mapped-type key remapping.

### 12. `12-utility-types`

- `01_utility-types.ts`: `Partial`, `Required`, `Readonly`, `Pick`, `Omit`, and `Record`.
- `02_extract-and-return-types.ts`: `Exclude`, `Extract`, `NonNullable`, `ReturnType`, and `Parameters`.
- `03_more-utility-types.ts`: `Awaited`, constructor/instance utilities, `ThisParameterType`, and string utilities.

### 13. `13-special-types-and-assertions`

- `01_unknown-never-any.ts`: `unknown`, `never`, and `any`.
- `02_assertions.ts`: `as` and non-null assertions.
- `03_null-safety.ts`: strict null safety.
- `04_never-exhaustiveness.ts`: exhaustive `never` checks.
- `05_assertion-functions.ts`: `asserts value is Type`.

### 14. `14-errors`

- `01_error-handling.ts`: safe `unknown` error handling.

### 15. `15-async-and-promises`

- `01_promises-async.ts`: `Promise<T>`, `async`, and `await`.
- `02_promise-all-and-fetch.ts`: typed concurrent promises.

### 16. `16-dom-and-browser`

- `01_browser-typing.ts`: DOM types, selectors, and events.

### 17. `17-declaration-files`

- `01_global.d.ts`: global declarations.
- `02_legacy-greeter.d.ts`: ambient module declarations.
- `03_declarations.ts`: consuming a declaration.
- `04_module-declarations.ts`: reading a declared module type.
- `05_declaration-merging.ts`: interface declaration merging.
- `06_global-augmentation.ts`: `declare global` augmentation.

### 18. `18-tooling`

- `01_npm-and-tsconfig.ts`: npm scripts and compiler configuration.

### 19. `19-practical-patterns`

- `01_result.ts`: generic result types.
- `02_result-demo.ts`: narrowing result values.
- `03_typed-event-bus.ts`: typed event payloads.

### 20. `20-projects/01-task-manager`

- `01_types.ts`: literal unions, interfaces, and `Pick`.
- `02_store.ts`: typed class store and `import type`.
- `03_main.ts`: composing the project.

## Coverage

The curriculum covers TypeScript annotations, inference, primitives, arrays, tuples, objects, functions, unions, intersections, literal types, narrowing, guards, interfaces, type aliases, enums, generics, constraints, classes, access modifiers, abstract classes, inheritance, modules, utility types, `keyof`, `typeof`, indexed access, mapped types, conditional types, template literal types, recursive types, `infer`, `satisfies`, `unknown`, `never`, `any`, assertions, null safety, errors, promises, DOM typing, declaration files, declaration merging, global augmentation, compiler configuration, and practical patterns.

Read each comment, predict the type, run `npm run check`, and then change the example to learn from the compiler message.
