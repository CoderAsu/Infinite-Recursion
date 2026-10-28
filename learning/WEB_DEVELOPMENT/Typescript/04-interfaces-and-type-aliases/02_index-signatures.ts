// An index signature describes objects whose keys are not known in advance.
interface ScoreBoard {
  [studentName: string]: number;
}

type FeatureFlags = Record<string, boolean>;

const scores: ScoreBoard = { Ada: 98, Lin: 91 };
const flags: FeatureFlags = { darkMode: true, betaSearch: false };

console.log(scores.Ada, flags.darkMode);

export {};
