// Access modifiers control which code can read or change class members.
class Account {
  public readonly owner: string;
  private balance: number;
  protected readonly currency = "USD";

  constructor(owner: string, openingBalance: number) {
    this.owner = owner;
    this.balance = openingBalance;
  }

  public deposit(amount: number): void {
    this.balance += amount;
  }

  public getBalance(): number {
    return this.balance;
  }
}

class PremiumAccount extends Account {
  describeCurrency(): string {
    return `Premium account uses ${this.currency}`;
  }
}

const account = new PremiumAccount("Ada", 100);
account.deposit(25);
console.log(account.owner, account.getBalance(), account.describeCurrency());

export {};
