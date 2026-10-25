// The then() method provides two callbacks:
// One funtion to run when a promise is fulfilled and one funtion to run when a promise is rejected.

// syntax
// promise.then(fulfilled(), rejected())


    function myPromise(complete){
        return new Promise(function(resolve, reject){

            console.log("Fetching data, please wait");

            setTimeout(() => {
                if(complete){
                    resolve("I am successful");
                }
                 else{
                    reject("I am failed");
                }
            }, 2000);
        });
    }

    let onfulfilment = (result) => {
        console.log(result);
    }

    let onrejection = (error) => {
        console.log(error);
    }

    myPromise(true).then(onfulfilment, onrejection);










// The catch() method provides a callback.

// The callback is a function to run when a promise is rejected.

function myPromise2(complete){
    return new Promise(function(resolve, reject){

        console.log("Fetching data, please wait");

        setTimeout(() => {
            if(complete){
                resolve("I am successful");
            }
             else{
                reject("I am failed");
            }
        }, 4000);
    });
}

let onfulfilment2 = (result) => {
    console.log(result);
}

let onrejection2 = (error) => {
    console.log(error);
}

myPromise2(false).catch(onrejection2);














// The finally() method provides a callback.

// The callback is a function to run when a promise is settled (fulfilled or rejected).

function myPromise3(complete){
    return new Promise(function(resolve, reject){

        console.log("Fetching data, please wait");

        setTimeout(() => {
            if(complete){
                resolve("I am successful");
            }
             else{
                reject("I am failed");
            }
        }, 6000);
    });
}

let onfulfilment3 = (result) => {
    console.log(result);
}

let onrejection3 = (error) => {
    console.log(error);
}

let finalRes = () => {
    console.log("All Done");
    
}

myPromise2(true).then(onfulfilment3).catch(onrejection3).finally(finalRes);

