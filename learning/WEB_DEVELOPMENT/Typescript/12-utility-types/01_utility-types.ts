// Utility types derive new shapes from an existing type instead of repeating fields.
interface Profile {
  id: number;
  name: string;
  bio: string;
  email: string;
}

const draft: Partial<Profile> = { name: "Ada" };
const requiredProfile: Required<Profile> = {
  id: 1,
  name: "Ada",
  bio: "Engineer",
  email: "ada@example.com",
};
const publicProfile: Pick<Profile, "name" | "bio"> = {
  name: requiredProfile.name,
  bio: requiredProfile.bio,
};
const privateProfile: Omit<Profile, "email"> = requiredProfile;
const readonlyProfile: Readonly<Profile> = requiredProfile;
const statusLabels: Record<"todo" | "done", string> = { todo: "To do", done: "Done" };

console.log(draft, publicProfile, privateProfile, readonlyProfile.name, statusLabels.done);

export {};
