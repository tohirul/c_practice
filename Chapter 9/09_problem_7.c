#include <stdio.h>

typedef struct Date {
    int mm;
    int dd;
    int yyyy;
} date;

int compare_dates(date d1, date d2);

int compare_dates(date d1, date d2) {
    if (d1.yyyy < d2.yyyy) {
        return -1;
    } else if (d1.yyyy > d2.yyyy) {
        return 1;
    } else {
        if (d1.mm < d2.mm) {
            return -1;
        } else if (d1.mm > d2.mm) {
            return 1;
        } else {
            if (d1.dd < d2.dd) {
                return -1;
            } else if (d1.dd > d2.dd) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return 0;  // This line should never be reached, but it's a good practice to include for
               // completeness.
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    date d1 = {5, 6, 2024};
    date d2 = {5, 6, 2024};

    int result = compare_dates(d1, d2);

    if (result == -1) {
          printf("Date 1 is earlier than Date 2\n");
    } else if (result == 1) {
          printf("Date 1 is later than Date 2\n");
    } else {
          printf("Date 1 is the same as Date 2\n");
    }
    return 0;
}