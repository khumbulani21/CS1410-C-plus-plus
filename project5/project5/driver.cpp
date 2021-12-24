#include "driver.h"

int main()
{
    int response;
    string fileName;
    Employee employee1(0,"","","",0.0,0);
    ofstream outFile;
    ifstream inFile;
    do
    {
        cout << "\n\nThis program has two options: \n";
        cout << "1 - Create a data file, or \n";
        cout << "2 - Read data from a file and print checks \n";
        cout << "0 - Quit\n";
        cout << "Please enter 1 to create a file, 2 to print checks, 0 to quit: ";
        cin >> response;
        while(cin.fail() || response < 0 || response > TWO)
        {
            cout << "Invalid response. Enter 1, 2, or 0: ";
            cin.clear();
            cin >> response;
        }
        try 
        {
            switch(response)
            {
                case 1:
                {
                    cout << "Enter name of data file to create: ";
                    cin >> fileName;
                    outFile.open(fileName.c_str());
                    if(outFile.fail())
                    {
                        throw runtime_error("File could not be created: " + fileName);
                    }
                    Employee joe(37, "Joe Brown", "123 Main St.", "123-6788", 10.00, 45.0);
                    Employee sam(21, "Sam Jones", "45 East State", "661-9000", 12.00, 30);
                    Employee mary(15, "Mary Smith", "12 High Street", "401-8900", 15.00, 40);
                    joe.write(outFile);
                    sam.write(outFile);
                    mary.write(outFile);
                    outFile.close();
                    cout << "File created.\n\n";
                    break;
                }//end case 1
                case 2:
                    cout << "Enter name of data file to read: ";
                    cin >> fileName;
                    inFile.open(fileName.c_str());
                    if(inFile.fail())
                    {
                        throw runtime_error("File could not be found: " + fileName);
                    }
                    while(!inFile.eof())
                    {
                        employee1.read(inFile);
                        if(!inFile.eof())
                        {
                            printCheck(employee1);
                        }
                    }
                    inFile.close();
                    break;
            }//end case 2
        } // end try
        catch(runtime_error& e)
        {
            cout << "File error:\n" << e.what();
            outFile.clear();
            inFile.clear();
        }
    }while(response != 0);
}

void printCheck(Employee worker)
{
    cout << fixed << setprecision(2);
    cout << "----------------------FluffShuffle Electronics-------------------------------------\n";
    cout << "Pay to the order of " << worker.getName() << "..............................$" << worker.calcPay() << endl;
    cout << "\nUnited Bank of Eastern Orem\n----------------------------------------------------\n";
    cout << "Hours Worked: " << worker.getHoursWorked() << endl;
    cout << "Hourly Wage: " << worker.getHourlyWage() << endl << endl;
}