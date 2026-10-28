// Interfaces describe the shape that an object must provide.
interface Printable {
  print(): string;
}

interface Lesson extends Printable {
  readonly id: number;
  title: string;
  durationMinutes?: number;
}

type LessonSummary = Pick<Lesson, "id" | "title">;

const lesson: Lesson = {
  id: 1,
  title: "Interfaces",
  print: () => "Interfaces describe object contracts",
};

const summary: LessonSummary = { id: lesson.id, title: lesson.title };
console.log(lesson.print(), summary);

export {};
