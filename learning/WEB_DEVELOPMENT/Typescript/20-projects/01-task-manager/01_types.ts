// The project uses a literal union so invalid task statuses cannot be created.
export type TaskStatus = "todo" | "doing" | "done";

export interface Task {
  readonly id: number;
  title: string;
  status: TaskStatus;
  tags: string[];
}

export type NewTask = Pick<Task, "title" | "tags">;
