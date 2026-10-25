
/*
    create/write -> fs.writeFileSync("file_name", "text");
    read         -> fs.readFileSync("file_name", "utf-8");
    update       -> fs.appendFileSync("file_name", "text");
    delete       -> fs.unlinkSync("file_name");
*/

const fs = require("fs");
const colors = require("colors");

const operation = process.argv[2];

try {
    if (operation === "write") {
        const fname = process.argv[3];
        const content = process.argv[4];
        const fileName = "files/" + fname + ".txt";

        fs.writeFileSync(fileName, content);

        console.log(colors.green("Data written successfully"));

    } else if (operation === "create") {
        const fname = process.argv[3];
        const content = process.argv[4];
        const fileName = "files/" + fname + ".txt";

        fs.writeFileSync(fileName, content);

        console.log(colors.green("File created successfully"));

    } else if (operation === "read") {
        const fname = process.argv[3];
        const fileName = "files/" + fname + ".txt";

        const content = fs.readFileSync(fileName, "utf-8");

        console.log(colors.green("Reading data..."));

        setTimeout(() => {
            console.log(content);
        }, 2000);

    } else if (operation === "update") {
        const fname = process.argv[3];
        const content = process.argv[4];
        const fileName = "files/" + fname + ".txt";

        fs.appendFileSync(fileName, "\n" + content);

        console.log(colors.green("File updated successfully"));

    } else if (operation === "delete") {
        const fname = process.argv[3];
        const fileName = "files/" + fname + ".txt";

        fs.unlinkSync(fileName);

        console.log(colors.green("File deleted successfully"));

    } else {
        console.log(colors.yellow("Invalid operation"));
        process.exitCode = 1;
    }

} catch (err) {
    console.log(colors.red("Error: " + err.message));
    process.exitCode = 1;
}
