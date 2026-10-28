interface LessonSummary {
  id: number;
  title: string;
}

function loadSummary(id: number): Promise<LessonSummary> {
  return Promise.resolve({ id, title: `Lesson ${id}` });
}

async function loadMany(): Promise<void> {
  // Promise.all starts independent work together and returns a typed array of results.
  const summaries = await Promise.all([loadSummary(1), loadSummary(2)]);

  // In a browser, fetch returns Promise<Response>. The JSON body is unknown to TypeScript,
  // so a real application should validate it before treating it as LessonSummary.
  console.log(summaries.map((summary) => summary.title).join(", "));
}

void loadMany();

export {};
