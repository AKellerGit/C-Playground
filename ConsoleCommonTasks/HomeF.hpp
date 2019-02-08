void callMenu() {
	std::cout << "Send Email: \t\t\t choose 1\n";
	std::cout << "FTP: \t\t\t\t choose 2\n";
	std::cout << "Game: \t\t\t\t choose 3\n";
	std::cout << "Analyze Matrices: \t\t choose 4\n";
	std::cout << "Calculate: \t\t\t choose 5\n";
	std::cout << "Data Structures and algorithms:  choose 6\n";
	std::cout << "Databases: \t\t\t choose 7\n";
	std::cout << "Reddit: \t\t\t choose 8\n";
	std::cout << "Exit: \t\t\t\t choose 0\n";
	std::cout << "CLEAR SCREEN: \t\t\t choose 123\n";

}

void callLinear() {

	Matrix M1,M2;

	unsigned int choice;

	do {
		std::cout << "\nPlease choose an Operation/Option: ";
		std::cout << "\n0. Show Matrix";
		std::cout << "\n1. Add";
		std::cout << "\n2. Subtract";
		std::cout << "\n3. Multiply";
		std::cout << "\n4. ColumnSpace";
		std::cout << "\n5. RowSpace";
		std::cout << "\n6. NullSpace";
		std::cout << "\n7. DeleteMatrix";
		std::cout << "\n8. DeleteAll";
		std::cout << "\n9. Input components of Matrices";
		std::cout << "\n123. Exit";
		std::cout << "\nWelcome! Please choose a valid option(integer only):";
		std::cin >> choice;

		switch (choice) {
		case 0: std::cout << "Matrix 1: \n"; M1.showMatrix();
				std::cout << "Matrix 2: \n"; M2.showMatrix(); break;
		case 1: Add(M1, M2); break;
		case 2: Subtract(M1, M2); break;
		case 3: std::cout << "\nMultiply\n\n"; break;
		case 4: std::cout << "\nColumnSpace\n\n"; break;
		case 5: std::cout << "\nRowSpace\n\n";  break;
		case 6: std::cout << "\nNullSpace\n\n"; break;
		case 7: std::cout << "\nDeleteMatrix\n\n"; break;
		case 8: std::cout << "\nDeleteAll\n\n"; break;
		case 9: std::cout << "change first, second, or both matrices?\nchoose 'f' for first, 's' for second or 'b' for both: ";
				char c;
				std::cin >> c;
				if(c== 'f')
					M1.InputComponentsMatrix();
				else if(c=='s')
					M2.InputComponentsMatrix();
				else {
					M1.InputComponentsMatrix(); std::cout << "\n\n"; M2.InputComponentsMatrix();
				}
				break;
		case 123: system("CLS"); break;
		}

	} while (choice != 123);
}

void callData() {
	unsigned int choice;

	do {
		std::cout << "\nPlease choose an Option: ";
		std::cout << "\n1. Send Email";
		std::cout << "\n2. Check New Emails";
		std::cin >> choice;
		system("CLS");
		switch (choice) {
		case 1: std::cout << ""; break;
		case 2: std::cout << ""; break;
		}

	} while (choice != 123);
}

void callLibCurl() {

	unsigned int choice;

	do {
		std::cout << "\nPlease choose an Option: ";
		std::cout << "\n1. Send Email";
		std::cout << "\n2. Check New Emails";
		std::cin >> choice;
		system("CLS");
		switch (choice) {
		case 1: std::cout << ""; break;
		case 2: std::cout << ""; break;
		}

	} while (choice != 123);
}