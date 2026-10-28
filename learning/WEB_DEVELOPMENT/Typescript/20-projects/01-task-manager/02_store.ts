// `import type` is erased from emitted output because it is needed only by the compiler.
import type { NewTask, Task, TaskStatus } from "./01_types";

export class TaskStore {
  private nextId = 1;
  private readonly tasks: Task[] = [];

  add(input: NewTask): Task {
    const task: Task = { ...input, id: this.nextId, status: "todo" };
    this.nextId += 1;
    this.tasks.push(task);
    return task;
  }

  updateStatus(id: number, status: TaskStatus): boolean {
    const task = this.tasks.find((item) => item.id === id);
    if (!task) {
      return false;
    }

    task.status = status;
    return true;
  }

  list(): readonly Task[] {
    return this.tasks;
  }
}
