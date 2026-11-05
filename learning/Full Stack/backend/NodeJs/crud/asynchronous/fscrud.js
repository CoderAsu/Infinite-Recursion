
/*
    create/write -> fs.promises.writeFile("file_name", "text");
    read         -> fs.promises.readFile("file_name", "utf-8");
    update       -> fs.promises.appendFile("file_name", "text");
    delete       -> fs.promises.unlink("file_name");
*/

const fs = require("fs");
const colors = require("colors");

const operation = process.argv[2];

async function fileOperations() {
    try {
        if (operation === "write") {
            const fname = process.argv[3];
            const content = process.argv[4];
            const fileName = "files/" + fname + ".txt";

            await fs.promises.writeFile(fileName, content);

            console.log(colors.green("Data written successfully"));

        } else if (operation === "create") {
            const fname = process.argv[3];
            const content = process.argv[4] || "";
            const fileName = "files/" + fname + ".txt";

            await fs.promises.writeFile(fileName, content);

            console.log(colors.green("File created successfully"));

        } else if (operation === "read") {
            const fname = process.argv[3];
            const fileName = "files/" + fname + ".txt";

            console.log(colors.green("Reading data..."));

            const content = await fs.promises.readFile(
                fileName,
                "utf-8"
            );

            setTimeout(() => {
                console.log(content);
            }, 2000);

        } else if (operation === "update") {
            const fname = process.argv[3];
            const content = process.argv[4];
            const fileName = "files/" + fname + ".txt";

            await fs.promises.appendFile(
                fileName,
                "\n" + content
            );

            console.log(colors.green("File updated successfully"));

        } else if (operation === "delete") {
            const fname = process.argv[3];
            const fileName = "files/" + fname + ".txt";

            await fs.promises.unlink(fileName);

            console.log(colors.green("File deleted successfully"));

        } else {
            console.log(colors.yellow("Invalid operation"));
            process.exitCode = 1;
        }

    } catch (err) {
        console.log(colors.red("Error: " + err.message));
        process.exitCode = 1;
    }
}

fileOperations();
