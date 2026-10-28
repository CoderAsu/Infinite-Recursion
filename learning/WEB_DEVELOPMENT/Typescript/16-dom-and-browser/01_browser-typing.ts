// The DOM library in tsconfig.json supplies types such as Document, HTMLElement, and Event.
function setupCounter(root: Document): void {
  const button = root.querySelector<HTMLButtonElement>("button[data-action='increment']");
  const output = root.querySelector<HTMLElement>("[data-counter]");

  if (!button || !output) {
    return;
  }

  let count = 0;
  button.addEventListener("click", (event: MouseEvent) => {
    event.preventDefault();
    count += 1;
    output.textContent = String(count);
  });
}

// This guard keeps the example safe when compiled output is run outside a browser.
if (typeof document !== "undefined") {
  setupCounter(document);
} else {
  console.log("Open this lesson in a browser to connect the button.");
}

export {};
