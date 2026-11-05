interface Member {
  name: string;
}

// A `this` parameter describes the object expected when the function is called.
function welcome(this: Member, punctuation: string): string {
  return `${this.name}${punctuation}`;
}

const member: Member = { name: "Ada" };
console.log(welcome.call(member, "!"));

export {};
