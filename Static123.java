
class BookSample {

    static String authorname = "James";
    final static int price = 2000;
    final static int due = 5;
    public static int month;
    static int paidamt;
    static int balanceamt;

    static class InstallmentPayment {

        public static void payment(int n) {
            System.out.println("Price of book is:" + price);
            System.out.println("due month:" + due);
            int eachmonthdue = price / due;
            if (due <= 10) {
                for (month = 1; month < n; month++) {
                    paidamt = eachmonthdue * month;
                    balanceamt = price - paidamt;
                }
                System.out.println("Paid amt till" + n + "month is" + paidamt + "balance amt to be paid is" + balanceamt);
            }
        }

        void display() {
            System.out.println("Auther name of book" + authorname);
            System.out.println("Price of the book" + price);
        }

    }

}

public class Static123
 {

    public static void main(String args[]) {
        BookSample.InstallmentPayment customer1 = new BookSample.InstallmentPayment();
        customer1.display();

        BookSample.InstallmentPayment.payment(5);
    }
}
