// Promise<Course> says asynchronous work will eventually produce a Course.
interface Course {
  id: number;
  title: string;
}

function loadCourse(): Promise<Course> {
  return Promise.resolve({ id: 1, title: "Async TypeScript" });
}

async function printCourse(): Promise<void> {
  try {
    const course = await loadCourse();
    console.log(course.title);
  } catch (error: unknown) {
    console.log(error instanceof Error ? error.message : "Unknown failure");
  }
}

void printCourse();

export {};
