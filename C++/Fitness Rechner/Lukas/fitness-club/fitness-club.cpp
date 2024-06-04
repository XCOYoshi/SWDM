#include <iostream>
#include <vector>

int main() {
    const double base_fee = 40.0;
    int num_family_members;
    std::vector<int> years_of_membership;

    std::cout << "Geben Sie die Anzahl der Familienmitglieder ein: ";
    std::cin >> num_family_members;

    years_of_membership.resize(num_family_members);
    for (int i = 0; i < num_family_members; ++i) {
        std::cout << "Geben Sie die Anzahl der Jahre der Mitgliedschaft fuer Mitglied " << (i + 1) << " ein: ";
        std::cin >> years_of_membership[i];
    }

    double family_discount = 0.0;
    if (num_family_members == 2) {
        family_discount = 0.05;
    }
    else if (num_family_members == 3) {
        family_discount = 0.15;
    }
    else if (num_family_members == 4) {
        family_discount = 0.20;
    }

    for (int i = 0; i < num_family_members; ++i) {
        double loyalty_discount = 0.0;
        if (years_of_membership[i] > 5) {
            loyalty_discount = 0.05;
        }

        double total_discount = family_discount + loyalty_discount;
        double monthly_fee = base_fee * (1 - total_discount);

        std::cout << "Der monatliche Beitrag fuer Mitglied " << (i + 1) << " betraegt: " << monthly_fee << " Euro" << std::endl;
    }

    return 0;
}