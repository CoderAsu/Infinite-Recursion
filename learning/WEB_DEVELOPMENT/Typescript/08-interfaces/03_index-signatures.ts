// An index signature describes objects whose keys are not known in advance.

// syntax
/*
  interface MyObject {
    [key: string]: number;
  }
*/

interface ScoreBoard {
  [studentName: string]: number;
}

const scores: ScoreBoard = { Ada: 98, Lin: 91 };





type FeatureFlags = Record<string, boolean>;
const flags: FeatureFlags = { darkMode: true, betaSearch: false };



console.log(scores.Ada, flags.darkMode);

export {};
