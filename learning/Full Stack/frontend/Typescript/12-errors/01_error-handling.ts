// Runtime failures are values too; catch them as unknown and narrow safely.
function riskyOperation(shouldFail: boolean): string {
  if (shouldFail) {
    throw new Error("The operation failed");
  }

  return "Success";
}

function messageFromError(error: unknown): string {
  if (error instanceof Error) {
    return error.message;
  }

  return "An unknown error occurred";
}

try {
  console.log(riskyOperation(true));
} catch (error: unknown) {
  console.log(messageFromError(error));
}

export {};
