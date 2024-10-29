//
//  main.cpp
//  Theater Concession Sales
//
//  Created by Mikhai Rochelle on 5/19/24.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Constants
    const double eveningTicketPrice = 12.0;
    const double matineeTicketPrice = 5.0;
    const double avgEveningConcession = 8.50;
    const double avgMatineeConcession = 10.50;
    
    // Calculatoring income from evening shows
    double eveningTicketIncome = eveningTicketPrice;
    double eveningConcessionIncome = avgEveningConcession;
    double eveningTotalIncome = eveningTicketIncome + eveningConcessionIncome;
    
    // Calculating income from evening shows
    double matineeTicketIncome = matineeTicketPrice;
    double matineeConcessionIncome = avgMatineeConcession;
    double matineeTotalIncome = matineeTicketIncome + matineeConcessionIncome;
    
    // Calculating percentages
    double eveningTicketPercent = (eveningTicketIncome / eveningTotalIncome) * 100;
    double eveningConcessionPercent = (eveningConcessionIncome / eveningTotalIncome) * 100;
    double matineeTicketPercent = (matineeTicketIncome / matineeTotalIncome) * 100;
    double matineeConcessionPercent = (matineeConcessionIncome / matineeTotalIncome) * 100;
    
    // Displaying results
    cout << fixed << setprecision(2);
    cout << "Evening Show Income:" << endl;
    cout << "   Ticket Sales: $" << eveningTicketIncome << " (" << eveningTicketPercent << "%)" << endl;
    cout << "   Concession: $" << eveningConcessionIncome << " (" << eveningConcessionPercent << "%)" << endl;
    
    cout << "\nMatinee Show Income:" << endl;
    cout << "   Ticket Sales: $" << matineeTicketIncome << " (" << matineeTicketPercent << "%)" << endl;
    cout << "   Concessions: $" << matineeConcessionIncome << " (" << matineeConcessionPercent << "%)" << endl;
    
    return 0;
}
