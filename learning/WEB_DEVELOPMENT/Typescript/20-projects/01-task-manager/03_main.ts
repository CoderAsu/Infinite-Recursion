// This file is the application entry point: it composes the typed store and types.
import { TaskStore } from "./02_store";

const store = new TaskStore();
const firstTask = store.add({ title: "Read the generics lesson", tags: ["typescript"] });
store.add({ title: "Build a small project", tags: ["practice"] });
store.updateStatus(firstTask.id, "done");

console.log(store.list());
