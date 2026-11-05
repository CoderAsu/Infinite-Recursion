
class BankAccount {

    #name;

    setName = (name) => this.#name = name;

    #balance = 1000000000;

    #calculateInterest() {

        return this.#balance * 0.05;

    }

    getInterestWithName() {

        console.log(`Hey ${this.#name}, your total balance is ${this.#calculateInterest()}!`);

    }

}


let p1 = new BankAccount();
p1.setName("Jinwoo");
p1.getInterestWithName();