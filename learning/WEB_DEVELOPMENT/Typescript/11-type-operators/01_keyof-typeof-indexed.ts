// Type operators can read information from existing values and types.
const settings = {
  theme: "dark",
  pageSize: 20,
};

type Settings = typeof settings;
type SettingKey = keyof Settings;
type PageSize = Settings["pageSize"];

function readSetting(key: SettingKey): Settings[SettingKey] {
  return settings[key];
}

const key: SettingKey = "theme";
const size: PageSize = 50;
console.log(readSetting(key), size);

export {};
