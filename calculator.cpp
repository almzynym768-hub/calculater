#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    do {
        cout << "\n===== الآلة الحاسبة =====\n";
        cout << "1. (+)\n";
        cout << "2. (-)\n";
        cout << "3. (*)\n";
        cout << "4. (/)\n";
        cout << "5. (%)\n";
        cout << "6. (a^b)\n";
        cout << "7. (√a)\n";
        cout << "8. |a|\n";
        cout << "9. (ln a)\n";
        cout << "10. (log10 a)\n";
        cout << "11. sin(a)\n";
        cout << "12. cos(a)\n";
        cout << "13. tan(a)\n";
        cout << "14. تحويل من درجة → راديان\n";
        cout << "15. تحويل من راديان → درجة\n";
        cout << "0. out\n";
        cout << "choice proplem: ";
        cin >> choice;

        if (choice >= 1 && choice <= 6) {
            cout <<"nam1:";
            cin >> num1;
            cout << "nam2: ";
            cin >> num2;
        }

        switch (choice) {
            case 1: cout << "= " << num1 + num2 << endl; break;
            case 2: cout << " = " << num1 - num2 << endl; break;
            case 3: cout << " = " << num1 * num2 << endl; break;
            case 4:
                if (num2 != 0) cout << " = " << num1 / num2 << endl;
                else cout << "!\n";
                break;
            case 5: cout << " = " << (int)num1 % (int)num2 << endl; break;
            case 6: cout << " = " << pow(num1, num2) << endl; break;
            case 7:
                cout << "enter:";
                cin >> num1;
                if (num1 >= 0) cout << " = " << sqrt(num1) << endl;
                else cout << "!\n";
                break;
            case 8:
                cout << "enter: ";
                cin >> num1;
                cout << " = " << fabs(num1) << endl;
                break;
            case 9:
                cout << "enter: ";
                cin >> num1;
                if (num1 > 0) cout << " = " << log(num1) << endl;
                else cout << ":      <= 0\n";
                break;
            case 10:
                cout << "enter: ";
                cin >> num1;
                if (num1 > 0) cout << " = " << log10(num1) << endl;
                else cout << ":<= 0\n";
                break;
            case 11:
                cout << "enter degre: ";
                cin >> num1;
                cout << "sin(" << num1 << "°) = " << sin(num1 * M_PI / 180.0) << endl;
                break;
            case 12:
                cout << "enter degre: ";
                cin >> num1;
                cout << "cos(" << num1 << "°) = " << cos(num1 * M_PI / 180.0) << endl;
                break;
            case 13:
                cout << "enter degre: ";
                cin >> num1;
                cout << "tan(" << num1 << "°) = " << tan(num1 * M_PI / 180.0) << endl;
                break;
            case 14:
                cout << "enter degre: ";
                cin >> num1;
                cout << "radyan= " << num1 * M_PI / 180.0 << endl;
                break;
            case 15:
                cout << "enter radyan: ";
                cin >> num1;
                cout << "degre = " << num1 * 180.0 / M_PI << "°" << endl;
                break;
            case 0:
                cout << " end.\n";
                break;
            default:
                cout << "errol!\n";
        }
    } while (choice != 0);

    return 0;
}
