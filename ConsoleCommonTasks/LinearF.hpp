


Matrix::Matrix() {

	std::cout << "This matrix has a row count of ";
	std::cin >> dimx;
	std::cout << "\nand this matrix has a column count of ";
	std::cin >> dimy;
	matrixSize = dimx * dimy;
	std::cout << "Okay, then this matrix has " << dimx << " rows and " << dimy << "columns. Thus, " << matrixSize << " components\n\n";

	M.resize(dimx, std::vector<int>(dimy));
}

void Matrix::add(std::vector<std::vector<int>> v1, std::vector<std::vector<int>> v2) {
	if (isValid(v1, v2)) {

	}
}

void Matrix::subtract(std::vector<std::vector<int>> v1, std::vector<std::vector<int>> v2) {

}

void Matrix::Multiply() {

}

void Matrix::ColumnSpace() {

}

void Matrix::RowSpace() {

}

void Matrix::NullSpace() {

}

void Matrix::DeleteMatrix() {

}

void Matrix::DeleteAll() {

}

void Matrix::NewMatrix() {

}

bool Matrix::isValid(std::vector<std::vector<int>> v1, std::vector<std::vector<int>> v2) {

	if (v1.size() != v2.size()) {
		std::cout << "non valid operation: sizes do not match - first matrix size has " << v1.size();
		std::cout << "\n and the second matrix has " << v2.size() << std::endl;
		return false;
	}
	else {
		return true;
	}
}

unsigned int Matrix::GetSize(Matrix M) {
	return matrixSize;
}


void showMatrix(Matrix V) {

	for (auto vec : V.M)
	{
		std::cout << "[ ";
		for (auto x : vec)
			std::cout << x << " ";
		std::cout << "]"; std::cout << std::endl;
	}
}