#include <stdio.h>

int main() {
    float bank_balance, cash_in_hand, transaction_amount;
    int error_count = 0;
    char transaction_type;

    scanf("%f %f", &bank_balance, &cash_in_hand);

    while (error_count != 3) {
        if (scanf(" %c %f", &transaction_type, &transaction_amount) != 2) {
            break;
        }

        if (transaction_type == 'D') {
            if (cash_in_hand < transaction_amount) {
                error_count++;
            } else {
                bank_balance += transaction_amount;
                cash_in_hand -= transaction_amount;
                error_count = 0;
            }
        } else if (transaction_type == 'W') {
            if (bank_balance < transaction_amount) {
                error_count++;
            } else {
                cash_in_hand += transaction_amount;
                bank_balance -= transaction_amount;
                error_count = 0;
            }
        }
    }

    printf("%.2f\n", bank_balance);
    printf("%.2f", cash_in_hand);

    return 0;
}

